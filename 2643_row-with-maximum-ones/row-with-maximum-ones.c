/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* rowAndMaximumOnes(int** mat, int matSize, int* matColSize, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * 2);
    (*returnSize) = 2;
    int maxRow = -1;
    int maxOne = -1;
    for(int i = 0; i < matSize; i++){
        int cur = 0;
        for(int j = 0; j < matColSize[i]; j++){
            cur += mat[i][j];
        }
        if(cur > maxOne){
            maxOne = cur;
            maxRow = i;
        }
    }
    result[0] = maxRow;
    result[1] = maxOne;
    return result;
}