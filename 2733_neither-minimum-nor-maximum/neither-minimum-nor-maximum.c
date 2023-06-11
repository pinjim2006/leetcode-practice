int findNonMinOrMax(int* nums, int numsSize){
    int max=0,min=101,ans=-1;
    for(int i=0;i<numsSize;i++){
        max=nums[i]>max?nums[i]:max;
        min=nums[i]<min?nums[i]:min;
    }
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=max&&nums[i]!=min){
            ans=nums[i];
            break;
        }
    }
    return ans;
}