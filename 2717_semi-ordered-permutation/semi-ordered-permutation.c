int semiOrderedPermutation(int* nums, int numsSize){
    int small=nums[0],sp=0,big=nums[0],bp=0,ans;
    for(int i=1;i<numsSize;i++){
        if(nums[i]<small){
            small=nums[i];
            sp=i;
        }else if(nums[i]>big){
            big=nums[i];
            bp=i;
        }
    }
    if(sp<bp){
        ans=sp+numsSize-1-bp;
    }else{
        ans=sp+numsSize-1-bp-1;
    }
    return ans;
}