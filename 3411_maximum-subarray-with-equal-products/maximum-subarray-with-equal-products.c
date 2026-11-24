int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int maxLength(int* nums, int numsSize) {
    int len = 1;
    int maxLen = 2;
    int cur = nums[0];
    for(int i = 1; i < numsSize; i++){
        while(gcd(nums[i], cur) != 1 && len != 0){
            cur /= nums[i - len];
            len--;
        }
        cur *= nums[i];
        len++;
        maxLen = maxLen > len ? maxLen : len;
    }
    return maxLen;
}