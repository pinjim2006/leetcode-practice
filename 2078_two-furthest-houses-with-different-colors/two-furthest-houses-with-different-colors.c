int maxDistance(int* colors, int colorsSize) {
    if(colors[0] != colors[colorsSize - 1]) return colorsSize - 1;
    for(int i = colorsSize - 1; i > 0; i--){
        if(colors[i] != colors[0] || colors[colorsSize - 1 - i] != colors[0]) return i;
    }
    return -1;
}