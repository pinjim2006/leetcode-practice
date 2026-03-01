int findJudge(int n, int** trust, int trustSize, int* trustColSize) {
    int count[n + 1] = {};
    for(int i = 0; i < trustSize; i++){
        count[trust[i][1]]++;
    }
    int result = -1;
    for(int i = 1; i <= n; i++){
        if(count[i] == n - 1){
            result = i;
            break;
        }
    }
    if(result == -1) return -1;
    for(int i = 0; i < trustSize; i++){
        if(trust[i][0] == result) return -1;
    }
    return result;
}