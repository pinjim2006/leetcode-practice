int countNegatives(int** grid, int gridSize, int* gridColSize) {
    int i = 0;
    int j = gridSize - 1;
    int ans = 0;
    while(i < gridColSize[0] && j >= 0){
        if(grid[j][i] < 0){
            ans += gridColSize[0] - i;
            j--;
        }else{
            i++;
        }
    }
    return ans;
}