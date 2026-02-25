/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* luckyNumbers(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * 50);
    (*returnSize) = 0;
    int minRow[matrixSize];
    int maxCol[matrixColSize[0]];
    for(int i = 0; i < matrixSize; i++) minRow[i] = matrix[i][0];
    for(int i = 0; i < matrixColSize[0]; i++) maxCol[i] = matrix[0][i];

    for(int i = 0; i < matrixSize; i++){
        for(int j = 0; j < matrixColSize[0]; j++){
            minRow[i] = minRow[i] < matrix[i][j] ? minRow[i] : matrix[i][j];
            maxCol[j] = maxCol[j] > matrix[i][j] ? maxCol[j] : matrix[i][j];
        }
    }
    for(int i = 0; i < matrixSize; i++){
        for(int j = 0; j < matrixColSize[0]; j++){
            if(minRow[i] == maxCol[j] && minRow[i] == matrix[i][j]){
                result[(*returnSize)++] = matrix[i][j];
            }
        }
    }
    return result;
}