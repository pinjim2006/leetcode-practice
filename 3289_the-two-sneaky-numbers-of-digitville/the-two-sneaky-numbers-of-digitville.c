/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * 2);
    *returnSize = 2;
    int n = numsSize - 2;
    int check[n];
    int count = 0;
    memset(check, 0, sizeof(check));
    for(int i = 0; i < numsSize; i++){
        check[nums[i]]++;
        if(check[nums[i]] == 2) result[count++] = nums[i];
    }
    if(result[0] > result[1]){
        int tmp = result[0];
        result[0] = result[1];
        result[1] = tmp;
    }
    return result;
}