int max(int a,int b){
    return a>b?a:b;
}

int longestMonotonicSubarray(int* nums, int numsSize) {
    int SI=1,SD=1,tmpI=1,tmpD=1;
    for(int i=1;i<numsSize;i++){
        if(nums[i]>nums[i-1]){
            tmpI++;
            tmpD=1;
        }else if(nums[i]<nums[i-1]){
            tmpD++;
            tmpI=1;
        }else{
            tmpI=1;
            tmpD=1;
        }
        SI=max(tmpI,SI);
        SD=max(tmpD,SD);
    }
    return max(SI,SD);
}