/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int cmp(const void* a, const void* b){
    return *(int*)a - *(int*)b;
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
    qsort(arr, arrSize, sizeof(int), cmp);
    int* result = (int*)malloc(sizeof(int) * arrSize);
    (*returnSize) = arrSize;
    int loc = 0;
    int cur = 0;
    while(loc < arrSize){
        for(int i = 0; i < arrSize; i++){
            if(arr[i] < 0) continue;
            if(countBit(arr[i]) == cur){
                result[loc++] = arr[i];
                arr[i] *= -1;
            }
        }
        cur++;
    }
    return result;
}