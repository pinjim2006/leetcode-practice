int numSpecial(int** mat, int matSize, int* matColSize) {
    int col[matColSize[0]] = {}, row[matSize] = {}, ans = 0;
    for(int i = 0; i < matSize; i++){
        for(int j = 0; j < matColSize[0]; j++){
            if(mat[i][j]){
                col[j]++;
                row[i]++;
            }
        }
    }
    for(int i = 0; i < matSize; i++){
        for(int j = 0; j < matColSize[0]; j++){
            if(col[j] == 1 && row[i] == 1 && mat[i][j]==1){
                ans++;
            }
        }
    }
    return ans;
}