/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
typedef struct{
    int val;
    int bit;
}count;

int cmp(const void* a, const void* b){
    if(((count*)a)->bit == ((count*)b)->bit){
        return ((count*)a)->val - ((count*)b)->val;
    }else{
        return ((count*)a)->bit - ((count*)b)->bit;
    }
}

int countBit(int n){
    int count = 0;
    while(n){
        count += (n & 1);
        n >>= 1;
    }
    return count;
}

int* sortByBits(int* arr, int arrSize, int* returnSize) {
    count counts[arrSize];
    for(int i = 0; i < arrSize; i++){
        counts[i].val = arr[i];
        counts[i].bit = countBit(arr[i]);
    }
    qsort(counts, arrSize, sizeof(count), cmp);
    int* result = (int*)malloc(sizeof(int) * arrSize);
    (*returnSize) = arrSize;
    for(int i = 0; i < arrSize; i++){
        result[i] = counts[i].val;
    }
    return result;
}