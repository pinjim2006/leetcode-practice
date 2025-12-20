int minDeletionSize(char** strs, int strsSize) {
    int count = 0;
    for(int i = 0; i < strlen(strs[0]); i++){
        for(int j = 1; j < strsSize; j++){
            if(strs[j][i] < strs[j-1][i]){
                count++;
                break;
            }
        }
    }
    return count;
}