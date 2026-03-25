bool canPartitionGrid(int** grid, int gridSize, int* gridColSize) {
    int n = gridSize;
    int m = gridColSize[0];
    long long rowSum[n] = {};
    long long colSum[m] = {};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            rowSum[i] += grid[i][j];
            colSum[j] += grid[i][j];
        }
    }
    long long left = 0, right = 0;
    for(int i = 0; i < n; i++){
        right += rowSum[i];
    }
    for(int i = 0; i < n; i++){
        if(left == right) return true;
        right -= rowSum[i];
        left += rowSum[i];
    }
    if(left == right) return true;
    left = 0;
    right = 0;
    for(int i = 0; i < m; i++){
        right += colSum[i];
    }
    for(int i = 0; i < m; i++){
        if(left == right) return true;
        right -= colSum[i];
        left += colSum[i];
    }
    if(left == right) return true;
    return false;
}