bool isTrionic(int* nums, int numsSize) {
    if(nums[1] <= nums[0]) return false;
    int status = 0;
    int count = 0;
    for(int i = 1; i < numsSize; i++){
        if(nums[i] == nums[i-1]) return false;
        if(count > 2) return false;
        if(status){
            if(nums[i] > nums[i-1]){
                status = 0;
                count++;
            }
        }else{
            if(nums[i] < nums[i-1]){
                status = 1;
                count++;
            }
        }
    }
    return count == 2;
}