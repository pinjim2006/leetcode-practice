bool isBoomerang(int** points, int pointsSize, int* pointsColSize) {
    if(points[0][1] == points[1][1] && points[2][1] == points[1][1]) return false;
    if((points[0][0] == points[1][0] && points[0][1] == points[1][1]) || (points[0][0] == points[2][0] && points[0][1] == points[2][1]) || (points[2][0] == points[1][0] && points[2][1] == points[1][1])) return false;
    float slope1 = (float)(points[0][0] - points[1][0]) / (points[0][1] - points[1][1]);
    float slope2 = (float)(points[1][0] - points[2][0]) / (points[1][1] - points[2][1]);
    return !(slope1 == slope2);
}