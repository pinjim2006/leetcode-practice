int findMaxK(int* nums, int numsSize){
    int max=-1;
    for(int i=0;i<numsSize-1;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]==-nums[j]){
                max=abs(nums[i])>max?abs(nums[i]):max;
            }
        }
    }
    return max;
}