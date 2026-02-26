int findNumbers(int* nums, int numsSize) {
    int ans = 0;
    for(int i = 0; i < numsSize; i++){
        int digit = 0;
        while(nums[i]){
            nums[i] /= 10;
            digit++;
        }
        ans += digit % 2 == 0;
    }
    return ans;
}