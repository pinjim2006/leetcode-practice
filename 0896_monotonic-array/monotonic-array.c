bool isMonotonic(int* nums, int numsSize){
    bool increasing=1,decreasing=1;
    for(int i=1;i<numsSize;i++){
        if(nums[i]>nums[i-1]){
            decreasing=0;
        }else if(nums[i]<nums[i-1]){
            increasing=0;
        }
    }
    return increasing||decreasing;
}