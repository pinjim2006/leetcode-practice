int minElement(int* nums, int numsSize) {
    int min = 1000;
    for(int i = 0; i < numsSize; i++){
        int tmp = nums[i];
        int count = 0;
        while(tmp){
            count += tmp % 10;
            tmp /= 10;
        }
        min = min < count ? min : count;
    }
    return min;
}