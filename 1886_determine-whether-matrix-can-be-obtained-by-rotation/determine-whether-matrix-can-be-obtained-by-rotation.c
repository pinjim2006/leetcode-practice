bool findRotation(int** mat, int matSize, int* matColSize, int** target, int targetSize, int* targetColSize) {
    int check[4] = {};
    int n = matSize;
    int m = matColSize[0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            check[0] += target[i][j] ^ mat[i][j];
            check[1] += target[i][j] ^ mat[j][n - i - 1];
            check[2] += target[i][j] ^ mat[n - i - 1][m - j - 1];
            check[3] += target[i][j] ^ mat[m - j - 1][i];
        }
    }
    return !(check[0] && check[1] && check[2] && check[3]);
}