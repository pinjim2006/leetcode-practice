int cmp(const void* a, const void* b){
    return *(int*)a - *(int*)b;
}

int minimumDifference(int* nums, int numsSize, int k) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int minAns = 1000000;
    for(int i = k-1; i < numsSize; i++){
        if((nums[i] - nums[i-k+1]) < minAns) minAns = (nums[i] - nums[i-k+1]);
    }
    return minAns;
}