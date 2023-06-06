int removeDuplicates(int* nums, int numsSize){
    int n[201],ans=0;
    memset(n,0,sizeof(n));
    for(int i=0;i<numsSize;i++){
        n[nums[i]+100]++;
    }
    
    for(int i=0;i<201;i++){
        if(n[i]>0){
            nums[ans]=i-100;
            ans++;
        }
    }
    return ans;
}