long long findTheArrayConcVal(int* nums, int numsSize) {
    long long ans = 0;
    for(int i = 0; i < numsSize / 2; i++){
        ans += nums[numsSize - 1 - i];
        int times = 0;
        int tmp = nums[numsSize - 1 - i];
        while(tmp){
            tmp /= 10;
            times++;
        }
        ans += (long long)nums[i] * pow(10, times);
    }
    if(numsSize % 2) ans += nums[numsSize / 2];
    return ans;
}