/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
typedef struct{
    int row;
    int soldiers;
}count;

int cmp(const void* a, const void* b){
    if(((const count*)a)->soldiers == ((const count*)b)->soldiers){
        return ((const count*)a)->row - ((const count*)b)->row;
    }else{
        return ((const count*)a)->soldiers - ((const count*)b)->soldiers;
    }
}

int* kWeakestRows(int** mat, int matSize, int* matColSize, int k, int* returnSize) {
    count counts[matSize];
    for(int i = 0; i < matSize; i++){
        counts[i].row = i;
        counts[i].soldiers = 0;
        for(int j = 0; j < matColSize[i]; j++){
            counts[i].soldiers += mat[i][j];
        }
    }
    qsort(counts, matSize, sizeof(count), cmp);
    int* result = (int*)malloc(sizeof(int) * k);
    *(returnSize) = k;
    for(int i = 0; i < k; i++){
        result[i] = counts[i].row;
    }
    return result;
}