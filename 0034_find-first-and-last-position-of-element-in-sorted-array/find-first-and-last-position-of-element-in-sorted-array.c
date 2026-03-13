/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * 2);
    (*returnSize) = 2;
    result[0] = -1;
    result[1] = -1;
    if(numsSize == 0) return result;
    int left = 0;
    int right = numsSize - 1;
    int loc = -1;
    while(left <= right){
        int mid = (left + right) / 2;
        if(nums[mid] == target){
            loc = mid;
            break;
        }else if(nums[mid] > target){
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }

    if(loc == -1) return result;
    left = loc;
    right = loc;
    while(left >= 0){
        if(nums[left] != target) break;
        result[0] = left;
        left--;
    }
    while(right < numsSize){
        if(nums[right] != target) break;
        result[1] = right;
        right++;
    }

    return result;
}