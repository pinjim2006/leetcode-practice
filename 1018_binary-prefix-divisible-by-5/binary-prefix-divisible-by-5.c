/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* prefixesDivBy5(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;

    bool* result = (bool*)malloc(sizeof(bool)*numsSize);
    int cur = 0;
    for(int i = 0; i < numsSize; i++){
        cur *= 2;
        cur += nums[i];
        cur %= 5;
        if(cur == 0) result[i] = true;
        else result[i] = false;
    }
    return result;
}