int cmp(const void* a, const void* b){
    return *(int*)a - *(int*)b;
}

int minPairSum(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(int), cmp);
    int maxSum = 0;
    for(int i = 0; i < numsSize / 2; i++){
        maxSum = maxSum > (nums[i] + nums[numsSize-i-1]) ? maxSum : (nums[i] + nums[numsSize-i-1]);
    }
    return maxSum;
}