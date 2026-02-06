int cmp(const void* a, const void* b){
    return *(int*)a - *(int*)b;
}

int minRemoval(int* nums, int numsSize, int k) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int i = 0, j = 0;
    while(j < numsSize){
        if(nums[i] >= nums[j] / k + (nums[j] % k != 0)){
            j++;
        }else{
            break;
        }
    }
    int ans = numsSize - (j - i);
    for(i = 1; i < numsSize && j < numsSize; i++){
        while(j < numsSize){
            if(nums[i] >= nums[j] / k + (nums[j] % k != 0)){
                j++;
            }else{
                break;
            }
        }
        if(nums[i] >= nums[j-1] / k + (nums[j-1] % k != 0)){
            ans = ans < numsSize - (j - i) ? ans : numsSize - (j - i);
        }
        if(j >= numsSize){
            break;
        }
    }
    return ans;
}