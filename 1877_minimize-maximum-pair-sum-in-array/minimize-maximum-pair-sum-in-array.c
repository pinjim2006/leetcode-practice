int cmp(const void *a, const void *b){
    return *(int*)a-*(int*)b;
}

int minPairSum(int* nums, int numsSize){
    int result=0;
    qsort(nums,numsSize,sizeof(int),cmp);
    for(int i=0;i<numsSize/2;i++){
        result=(nums[i]+nums[numsSize-i-1])>result?(nums[i]+nums[numsSize-i-1]):result;
    }
    return result;
}