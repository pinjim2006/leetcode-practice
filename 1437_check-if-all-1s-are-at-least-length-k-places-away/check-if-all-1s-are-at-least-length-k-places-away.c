bool kLengthApart(int* nums, int numsSize, int k) {
    int left = 0;
    int right = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] == 1){
            left = i;
            break;
        }
    }
    for(int i = left + 1; i < numsSize; i++){
        right = i;
        if(nums[i] == 1){
            if((right - left - 1) < k) return false;
            left = i;
        }
    }
    return true;
}