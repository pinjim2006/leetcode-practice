int equalPairs(int** grid, int gridSize, int* gridColSize){
    int ans=0;
    for(int i=0;i<gridSize;i++){
        for(int j=0;j<gridSize;j++){
            bool r=1;
            for(int k=0;k<gridSize;k++){
                if(grid[i][k]!=grid[k][j]){
                    r=0;
                    break;
                }
            }

            if(r){
                ans++;
            }
        }
    }
    return ans;
}