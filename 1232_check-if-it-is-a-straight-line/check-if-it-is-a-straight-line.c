bool checkStraightLine(int** coordinates, int coordinatesSize, int* coordinatesColSize) {
    if(coordinates[0][1] == coordinates[1][1]){
        for(int i = 2; i < coordinatesSize; i++){
            if(coordinates[0][1] != coordinates[i][1]) return false;
        }
        return true;
    }
    float slope = (float)(coordinates[0][0] - coordinates[1][0]) / (coordinates[0][1] - coordinates[1][1]);
    for(int i = 2; i < coordinatesSize; i++){
        if(slope != (float)(coordinates[0][0] - coordinates[i][0]) / (coordinates[0][1] - coordinates[i][1])) return false;
    }
    return true;
}