int findSpecialInteger(int* nums, int n){
    int q=n/4;
    for(int i=0;i<n-q;i++){
        if(nums[i]==nums[i+q]){
            return nums[i];
        }
    }
    return 0;
}