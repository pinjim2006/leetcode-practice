int sumDivisibleByK(int* nums, int numsSize, int k) {
    int count[101] = {};
    for(int i = 0; i < numsSize; i++){
        count[nums[i]]++;
    }
    int ans = 0;
    for(int i = 1; i < 101; i++){
        if(count[i] % k == 0){
            ans += count[i] * i;
        }
    }
    return ans;
}