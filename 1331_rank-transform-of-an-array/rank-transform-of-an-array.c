/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
typedef struct{
    int val;
    int loc;
}num;

int cmp(const void* a, const void* b){
    return ((num*)a)->val - ((num*)b)->val;
}

int* arrayRankTransform(int* arr, int arrSize, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * arrSize);
    (*returnSize) = arrSize;
    if(arrSize == 0) return result;

    num nums[arrSize];
    for(int i = 0; i < arrSize; i++){
        nums[i].val = arr[i];
        nums[i].loc = i;
    }
    qsort(nums, arrSize, sizeof(num), cmp);
    result[nums[0].loc] = 1;
    int rank = 1;
    for(int i = 1; i < arrSize; i++){
        if(nums[i].val != nums[i - 1].val) rank++;
        result[nums[i].loc] = rank;
    }
    return result;
}