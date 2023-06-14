int minSubArrayLen(int target, int* nums, int numsSize){
    int sum=0,start=0,min=numsSize+1;
    for(int i=0;i<numsSize;i++){
        sum+=nums[i];
        while(sum>=target){
            min=(i-start+1)<min?(i-start+1):min;
            sum-=nums[start];
            start++;
        }
    }
    if(min==numsSize+1){
        return 0;
    }else{
        return min;
    }
}