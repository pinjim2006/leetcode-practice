/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int cmp(const void* a, const void* b){
    return *(int*)a - *(int*)b;
}

int* findMissingElements(int* nums, int numsSize, int* returnSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    (*returnSize) = nums[numsSize - 1] - nums[0] - numsSize + 1;
    int* result = (int*)malloc(sizeof(int) * (*returnSize));
    int a = 0, b = 0;
    for(int i = nums[0]; i < nums[numsSize - 1]; i++){
        if(i == nums[a]){
            a++;
        }else{
            result[b++] = i;
        }
    }
    return result;
}