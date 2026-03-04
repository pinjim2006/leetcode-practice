int minOperations(int* nums, int numsSize, int k) {
    int ans = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] < k) ans++;
    }
    return ans;
}