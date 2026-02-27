int countPoints(char* rings) {
    int rods[10] = {};
    for(int i = 0; rings[i] != '\0'; i += 2){
        if(rings[i] == 'R'){
            rods[rings[i+1] - '0'] |= 1;
        }else if(rings[i] == 'G'){
            rods[rings[i+1] - '0'] |= 2;
        }else if(rings[i] == 'B'){
            rods[rings[i+1] - '0'] |= 4;
        }
    }
    int ans = 0;
    for(int i = 0; i < 10; i++){
        if(rods[i] == 7) ans++;
    }
    return ans;
}