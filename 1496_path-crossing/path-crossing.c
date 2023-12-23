bool isPathCrossing(char* path) {
    int x=0,y=0;
    int v[2000][2000];
    for(int i=0;i<2000;i++){
        for(int j=0;j<2000;j++){
            v[i][j]=0;
        }
    }
    v[1000][1000]=1;
    for(int i=0;i<strlen(path);i++){
        switch(path[i]){
            case 'N':
                y++;
                break;
            case 'E':
                x++;
                break;
            case 'S':
                y--;
                break;
            case 'W':
                x--;
                break;
        }
        if(v[x+1000][y+1000]==1)
            return 1;
        v[x+1000][y+1000]=1;
    }
    return 0;
}