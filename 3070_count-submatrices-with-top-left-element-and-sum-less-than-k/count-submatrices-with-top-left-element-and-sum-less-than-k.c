int countSubmatrices(int** grid, int gridSize, int* gridColSize, int k) {
    int ans = 0;
    for(int i = 0; i < gridSize; i++){
        if(grid[i][0] > k){ 
            grid[i][0] = -1;
            break;
        }
        for(int j = 1; j < gridColSize[i]; j++){
            grid[i][j] += grid[i][j - 1];
            if(grid[i][j] > k){
                grid[i][j] = -1;
                break;
            }
        }
    }
    for(int i = 0; i < gridColSize[0]; i++){
        if(grid[0][i] == -1){
            break;
        }else{
            ans++;
        }
    }
    for(int i = 1; i < gridSize; i++){
        for(int j = 0; j < gridColSize[i]; j++){
            if(grid[i - 1][j] == -1 || grid[i][j] == -1 || (grid[i - 1][j] + grid[i][j]) > k){
                grid[i][j] = -1;
                break;
            }else{
                grid[i][j] += grid[i - 1][j];
                ans++;
            }
        }
    }
    return ans;
}