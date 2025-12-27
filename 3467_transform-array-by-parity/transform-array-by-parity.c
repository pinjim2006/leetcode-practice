/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* transformArray(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * numsSize);
    *returnSize = numsSize;
    memset(result, 0, sizeof(int) * numsSize);
    int n = numsSize - 1;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] % 2){
            result[n--] = 1;
        }
    }
    return result;
}