int cmp(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}

int minOperations(int* nums, int numsSize){
    qsort(nums,numsSize,sizeof(int),cmp);
    int tmp=1,ans=0;
    for(int i=1;i<numsSize;i++){
        int check=1;
        if(nums[i]==nums[i-1]){
            tmp++;
            check=0;
        }
        if(check||i==numsSize-1){
            if(tmp==1||(i==numsSize-1&&nums[i]!=nums[i-1])){
                return -1;
            }else if(tmp%3){
                ans+=(tmp/3+1);
            }else{
                ans+=(tmp/3);
            }
            tmp=1;
        }
    }
    return ans;
}