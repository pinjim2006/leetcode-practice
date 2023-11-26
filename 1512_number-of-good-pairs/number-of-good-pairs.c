int numIdenticalPairs(int* nums, int numsSize) {
    int count[100],ans=0;
    memset(count,0,sizeof(count));
    for(int i=0;i<numsSize;i++){
        count[nums[i]-1]++;
    }
    for(int i=0;i<100;i++){
        ans+=(count[i]*(count[i]-1))/2;
    }
    return ans;
}