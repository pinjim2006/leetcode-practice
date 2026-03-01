/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* constructTransformedArray(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * numsSize);
    (*returnSize) = numsSize;
    for(int i = 0; i < numsSize; i++){
        int loc = (i + nums[i] + numsSize * 100) % numsSize;
        result[i] = nums[loc];
    }
    return result;
}