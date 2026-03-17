#define max(a,b) ((a)>(b))?(a):(b)

int cmp(const void* a, const void* b){
    return *(int*)b - *(int*)a;
}

int largestSubmatrix(int** matrix, int matrixSize, int* matrixColSize) {
    int m = matrixSize;
    int n = matrixColSize[0];
    int result = 0;
    for(int i = 1; i < m; i++){
        for(int j = 0; j < n; j++){
            if(matrix[i][j] == 1){
                matrix[i][j] += matrix[i - 1][j];
            }
        }
    }

    for(int i = 0; i < matrixSize; i++){
        qsort(matrix[i], n, sizeof(int), cmp);
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(matrix[i][j] == 0) break;
            result = max(result, (j + 1) * matrix[i][j]);
        }
    }
    return result;
}