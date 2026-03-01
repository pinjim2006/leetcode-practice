/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
typedef struct{
    int val;
    int freq;
}frequency;

int cmp(const void* a, const void* b){
    return ((frequency*)b)->freq - ((frequency*)a)->freq;
}

int* frequencySort(int* nums, int numsSize, int* returnSize) {
    frequency f[202];
    for(int i = 0; i < 202; i++){
        f[i].val = i - 100;
        f[i].freq = 0;
    }
    for(int i = 0; i < numsSize; i++){
        f[nums[i] + 100].freq++;        
    }
    qsort(f, 202, sizeof(frequency), cmp);
    int* result = (int*)malloc(sizeof(int) * numsSize);
    (*returnSize) = numsSize;
    int n = numsSize - 1;
    for(int i = 0; i < 202; i++){
        for(int j = f[i].freq; j > 0; j--){
            result[n--] = f[i].val;
        }
    }
    return result;
}