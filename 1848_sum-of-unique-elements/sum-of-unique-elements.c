int sumOfUnique(int* nums, int numsSize) {
    int check[101] = {};
    int ans = 0;
    for(int i = 0; i < numsSize; i++){
        check[nums[i]]++;
    }
    for(int i = 1; i < 101; i++){
        if(check[i] == 1) ans += i;
    }
    return ans;
}