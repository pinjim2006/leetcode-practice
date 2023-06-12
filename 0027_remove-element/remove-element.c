int removeElement(int* nums, int numsSize, int val){
    int left=0,right=numsSize-1,ans=0;
    while(left<=right){
        if(nums[left]==val){
            nums[left]=nums[right];
            right--;
        }else{
            left++;
            ans++;
        }
    }
    return ans;
}