int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findGCD(int* nums, int numsSize) {
    int minNum = nums[0];
    int maxNum = nums[0];
    for(int i = 0; i < numsSize; i++){
        minNum = nums[i] < minNum ? nums[i] : minNum;
        maxNum = nums[i] > maxNum ? nums[i] : maxNum;
    }
    return gcd(minNum, maxNum);
}