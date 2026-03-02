int gcd(int x, int y) {
    while (y != 0) {
        int temp = x % y;
        x = y;
        y = temp;
    }
    return x;
}

int countBeautifulPairs(int* nums, int numsSize) {
    int ans = 0;
    for(int i = 0; i < numsSize - 1; i++){
        for(int j = i + 1; j < numsSize; j++){
            int tmp = nums[i];
            while(tmp >= 10){
                tmp /= 10;
            }
            if(gcd(tmp, nums[j] % 10)== 1) ans++;
        }
    }
    return ans;
}