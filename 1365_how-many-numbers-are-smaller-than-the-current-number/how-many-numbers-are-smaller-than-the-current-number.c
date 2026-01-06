/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * numsSize);
    *returnSize = numsSize;
    int count[102];
    memset(count, 0, sizeof(count));
    for(int i = 0; i < numsSize; i++){
        count[nums[i]+1]++;
    }
    for(int i = 1; i < 102; i++){
        count[i] += count[i - 1];
    }
    for(int i = 0; i < numsSize; i++){
        result[i] = count[nums[i]];
    }
    return result;
}