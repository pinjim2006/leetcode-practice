/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** constructProductMatrix(int** grid, int gridSize, int* gridColSize, int* returnSize, int** returnColumnSizes) {
    int n = gridSize;
    int m = gridColSize[0];
    *returnColumnSizes = (int*)malloc(sizeof(int) * n);
    int** result = (int**)malloc(sizeof(int*) * n);
    (*returnSize) = n;
    long long cur = 1;
    for(int i = 0; i < n; i++){
        (*returnColumnSizes)[i] = m;
        result[i] = (int*)malloc(sizeof(int) * m);
        if(i == 0){
            result[i][0] = 1;
        }else{
            cur *= grid[i - 1][m - 1];
            cur %= 12345;
            result[i][0] = (int)cur;
        }
        for(int j = 1; j < m; j++){
            cur *= grid[i][j - 1];
            cur %= 12345;
            result[i][j] = (int)cur;
        }
    }
    cur = 1;
    for(int i = n - 1; i >= 0; i--){
        if(i != n - 1){
            cur *= grid[i + 1][0];
            cur %= 12345;
            long long tmp = cur * result[i][m - 1];
            result[i][m - 1] = tmp % 12345;
        }
        for(int j = m - 2; j >= 0; j--){
            cur *= grid[i][j + 1];
            cur %= 12345;
            long long tmp = cur * result[i][j];
            result[i][j] = tmp % 12345;
        }
    }
    return result;
}