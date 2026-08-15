int longestSubsequence(int* nums, int numsSize) {
    int total = 0;
    int check = 0;
    for(int i = 0; i < numsSize; i++){
        total ^= nums[i];
        if(nums[i] != 0) check = 1;
    }
    if(total != 0) return numsSize;
    else if(check) return numsSize - 1;
    else return 0;
}