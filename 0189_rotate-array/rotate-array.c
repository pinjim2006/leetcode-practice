int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void rotate(int* nums, int numsSize, int k) {
    k %= numsSize;
    if(k == 0) return;
    int n = gcd(k, numsSize);
    for(int i = 0; i < n; i++){
        int last = nums[i];
        int loc = i;
        for(int j = 0; j < numsSize / n; j++){
            loc += k;
            loc %= numsSize;
            int tmp = nums[loc];
            nums[loc] = last;
            last = tmp;
        }
    }
}