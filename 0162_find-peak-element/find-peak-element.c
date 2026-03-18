int findPeakElement(int* nums, int numsSize) {
    if(numsSize == 1) return 0;
    int left = 0;
    int right = numsSize - 1;
    while(left <= right){
        int mid = (left + right) / 2;
        if(mid == 0){
            if(nums[mid] > nums[mid + 1]) return mid;
            else left = mid + 1;
        }else if(mid == numsSize - 1){
            if(nums[mid] > nums[mid - 1]) return numsSize - 1;
            else right = mid - 1;
        }else if(nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]){
            return mid;
        }else if(nums[mid] < nums[mid - 1]){
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }
    return -1;
}