int diagonalSum(int** mat, int matSize, int* matColSize) {
    int ans = 0;
    for(int i = 0; i < matSize; i++){
        ans += mat[i][i];
        ans += mat[i][matSize - i - 1];
    }
    if(matSize % 2) ans -= mat[matSize/2][matSize/2];
    return ans;
}