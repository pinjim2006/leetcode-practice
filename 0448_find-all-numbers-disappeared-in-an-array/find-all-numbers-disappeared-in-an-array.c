/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int count = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[abs(nums[i]) - 1] > 0){
            nums[abs(nums[i]) - 1] *= -1;
        }else{
            count++;
        }
    }
    (*returnSize) = count;
    int* result = (int*)malloc(sizeof(int) * count);
    int j = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] > 0){
            result[j++] = i + 1;
        }
    }
    return result;
}