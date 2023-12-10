/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {
    int col=*matrixColSize;
    *returnSize=col;
    int** result=(int**)malloc(sizeof(int*)*col);
    *returnColumnSizes=(int*)malloc(sizeof(int)*col);

    for(int i=0;i<col;i++){
        result[i]=(int*)malloc(sizeof(int)*matrixSize);
        (*returnColumnSizes)[i]=matrixSize;
    }

    for(int i=0;i<matrixSize;i++){
        for(int j=0;j<col;j++){
            result[j][i]=matrix[i][j];
        }
    }

    return result;
}