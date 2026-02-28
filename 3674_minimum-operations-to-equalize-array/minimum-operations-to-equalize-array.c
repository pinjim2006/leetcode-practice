int minOperations(int* nums, int numsSize) {
    int first = nums[0];
    for(int i = 1; i < numsSize; i++){
        if(nums[i] != first) return 1;
    }
    return 0;
}