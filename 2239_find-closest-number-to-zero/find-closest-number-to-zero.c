int findClosestNumber(int* nums, int numsSize) {
    int minDistance = 1000000;
    int result = 1000000;
    for(int i = 0; i < numsSize; i++){
        if(abs(nums[i]) < minDistance){
            minDistance = abs(nums[i]);
            result = nums[i];
        }else if(abs(nums[i]) == minDistance){
            if(nums[i] > result) result = nums[i];
        }
    }
    return result;
}