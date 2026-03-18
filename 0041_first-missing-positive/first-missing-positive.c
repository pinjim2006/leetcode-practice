int firstMissingPositive(int* nums, int numsSize) {
    for(int i = 0; i < numsSize; i++){
        if(nums[i] < 0) nums[i] = 0;
    }
    for(int i = 0; i < numsSize; i++){
        if(nums[i] != 0 && nums[i] != INT_MIN){
            int n = abs(nums[i]);
            if(n > numsSize) continue;
            else if(nums[n - 1] > 0) nums[n - 1] *= -1;
            else if(nums[n - 1] == 0) nums[n - 1] = INT_MIN;
        }
    }
    for(int i = 0; i < numsSize; i++){
        if(nums[i] >= 0) return i + 1;
    }
    return numsSize + 1;
}