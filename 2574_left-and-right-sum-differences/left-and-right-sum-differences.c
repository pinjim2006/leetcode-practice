/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * numsSize);
    *returnSize = numsSize;
    int leftSum = 0, rightSum = 0;
    for(int i = 0; i < numsSize; i++) rightSum += nums[i];
    for(int i = 0; i < numsSize; i++){
        rightSum -= nums[i];
        result[i] = abs(leftSum - rightSum);
        leftSum += nums[i];
    }
    return result;
}