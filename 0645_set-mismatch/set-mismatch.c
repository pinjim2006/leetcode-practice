/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * 2);
    *returnSize = 2;
    for(int i = 0; i < numsSize; i++){
        if(nums[abs(nums[i]) - 1] < 0){
            result[0] = abs(nums[i]);
        }else{
            nums[abs(nums[i]) - 1] *= -1;
        }
    }
    for(int i = 0; i < numsSize; i++){
        if(nums[i] > 0){
            result[1] = i + 1;
            break;
        }
    }
    return result;
}