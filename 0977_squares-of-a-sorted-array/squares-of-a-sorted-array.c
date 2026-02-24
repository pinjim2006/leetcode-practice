/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * numsSize);
    (*returnSize) = numsSize;
    int loc = numsSize - 1;
    int left = 0, right = numsSize - 1;
    while(left <= right){
        if(abs(nums[left]) > abs(nums[right])){
            result[loc--] = nums[left] * nums[left];
            left++;
        }else{
            result[loc--] = nums[right] * nums[right];
            right--;
        }
    }
    return result;
}