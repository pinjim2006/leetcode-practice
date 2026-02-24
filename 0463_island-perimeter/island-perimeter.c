int checkBlock(int** grid, int gridSize, int gridColSize, int x, int y){
    int count = 0;
    if(x != 0){
        count += !grid[x - 1][y];
    }else{
        count++;
    }
    if(x != gridSize - 1){
        count += !grid[x + 1][y];
    }else{
        count++;
    }
    if(y != 0){
        count += !grid[x][y - 1];
    }else{
        count++;
    }
    if(y != gridColSize - 1){
        count += !grid[x][y + 1];
    }else{
        count++;
    }
    return count;
}

int islandPerimeter(int** grid, int gridSize, int* gridColSize) {
    int ans = 0;
    for(int i = 0; i < gridSize; i++){
        for(int j = 0; j < gridColSize[i]; j++){
            if(grid[i][j] == 1){
                ans += checkBlock(grid, gridSize, gridColSize[i], i, j);
            }
        }
    }
    return ans;
}