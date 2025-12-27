int subsetXORSum(int* nums, int numsSize) {
    int result = 0;
    for(int i = 0; i < numsSize; i++){
        result |= nums[i];
    }
    result *= (int)pow(2, numsSize - 1);
    return result;
}