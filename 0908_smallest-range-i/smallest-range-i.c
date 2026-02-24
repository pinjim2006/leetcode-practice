int smallestRangeI(int* nums, int numsSize, int k) {
    int minNum = 100000, maxNum = -1;
    for(int i = 0; i < numsSize; i++){
        minNum = minNum < nums[i] ? minNum : nums[i];
        maxNum = maxNum > nums[i] ? maxNum : nums[i];
    }
    return (maxNum - minNum < k * 2) ? 0 : maxNum - minNum - 2*k;
}