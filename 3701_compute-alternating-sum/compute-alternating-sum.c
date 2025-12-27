int alternatingSum(int* nums, int numsSize) {
    int result = nums[0];
    for(int i = 1; i < numsSize; i++){
        result += i % 2 ? -nums[i] : nums[i];
    }
    return result;
}