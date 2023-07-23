int differenceOfSum(int* nums, int numsSize){
    int sum=0,dsum=0;
    for(int i=0;i<numsSize;i++){
        sum+=nums[i];
        while(nums[i]>0){
            dsum+=nums[i]%10;
            nums[i]/=10;
        }
    }
    if(sum-dsum>0){
        return sum-dsum;
    }else{
        return dsum-sum;
    }
}