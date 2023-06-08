int countNegatives(int** grid, int gridSize, int* gridColSize){
    int result=0,n=0;
    for(int i=gridSize-1;i>=0;i--){
        if(n<gridColSize[0]){
            if(grid[i][n]>=0){
                n++;
                result+=gridSize-1-i;
                i++;
            }
        }else{
            break;
        }
    }
    if(n<gridColSize[0]){
        result+=(gridColSize[0]-n)*gridSize;
    }
    return result;
}