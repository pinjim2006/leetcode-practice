int countCompleteDayPairs(int* nums, int numsSize) {
    int result=0;
    for(int i=0;i<numsSize;i++) nums[i]%=24;
    for(int i=0;i<numsSize-1;i++){
        for(int j=i+1;j<numsSize;j++){
            if((nums[i]+nums[j])%24==0) result++;
        }
    }
    return result;
}