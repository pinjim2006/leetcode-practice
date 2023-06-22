int maximumCount(int* nums, int numsSize){
    int ans=0;
    if(nums[0]>0||nums[numsSize-1]<0){
        ans=numsSize; 
    }else{
        int start=0,end=numsSize-1,n=0,p=0;
        while(start<=end){
            if(nums[start]<0){
                n++;
                start++;
            }
            if(nums[end]>0){
                p++;
                end--;
            }
            if(nums[start]==0&&nums[end]==0){
                break;
            }
        }
        ans=n>p?n:p;
    }
    return ans;
}