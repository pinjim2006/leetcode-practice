int cmp(const void* a, const void* b){
    return *(int*)a - *(int*)b;
}

int missingMultiple(int* nums, int numsSize, int k) {
    int times = 1;
    qsort(nums, numsSize, sizeof(int), cmp);
    for(int i = 0; i < numsSize; i++){
        if(nums[i] > k * times) return k * times;
        else if(nums[i] == k * times) times++;
    }
    return k * times;
}