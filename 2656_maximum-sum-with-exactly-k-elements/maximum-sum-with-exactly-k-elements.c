int maximizeSum(int* nums, int numsSize, int k){
    int max=0;
    for(int i=0;i<numsSize;i++){
        max=nums[i]>max?nums[i]:max;
    }
    return max*k+(k*(k-1)/2);
}