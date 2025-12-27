/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * 2);
    *returnSize = 2;
    int n = numsSize - 2;
    int check[n];
    memset(check, 0, sizeof(check));
    for(int i = 0; i < numsSize; i++){
        check[nums[i]]++;
    }
    int count = 0;
    for(int i = 0; i < n; i++){
        if(check[i] == 2) result[count++] = i;
    }
    return result;
}