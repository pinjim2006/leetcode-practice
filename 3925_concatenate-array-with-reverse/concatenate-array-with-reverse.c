/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* concatWithReverse(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * numsSize * 2);
    *returnSize = numsSize * 2;
    for(int i = 0; i < numsSize; i++){
        result[i] = result[numsSize * 2 - i - 1] = nums[i];
    }
    return result;
}