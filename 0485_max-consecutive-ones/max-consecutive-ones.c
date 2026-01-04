int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int maxCount = 0;
    int count = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] == 1){
            count++;
            maxCount = count > maxCount ? count : maxCount;
        }else{
            count = 0;
        }
    }
    maxCount = count > maxCount ? count : maxCount;
    return maxCount;
}