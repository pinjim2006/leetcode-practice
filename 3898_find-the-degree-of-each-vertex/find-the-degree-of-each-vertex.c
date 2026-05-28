/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDegrees(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * matrixSize);
    *returnSize = matrixSize;
    for(int i = 0; i < matrixSize; i++){
        result[i] = 0;
        for(int j = 0; j < matrixColSize[i]; j++){
            result[i] += matrix[i][j];
        }
    }
    return result;
}