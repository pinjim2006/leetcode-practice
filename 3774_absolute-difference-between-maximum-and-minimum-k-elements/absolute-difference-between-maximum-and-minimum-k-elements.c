int cmp(const void* a, const void* b){
    return *(int*)a - *(int*)b;
}

int absDifference(int* nums, int numsSize, int k) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int max = 0;
    int min = 0;
    for(int i = 0; i < k; i++){
        max += nums[numsSize - 1 - i];
        min += nums[i];
    }
    return max - min;
}