int maximumValue(char** strs, int strsSize) {
    int maxAns = 0;
    for(int i = 0; i < strsSize; i++){
        int len = 0;
        bool onlyDigit = true;
        int num = 0;
        for(int j = 0; strs[i][j] != '\0'; j++){
            if(isdigit(strs[i][j]) && onlyDigit){
                num *= 10;
                num += strs[i][j] - '0';
            }else{
                onlyDigit = false;
            }
            len++;
        }
        if(onlyDigit){
            maxAns = maxAns > num ? maxAns : num;
        }else{
            maxAns = maxAns > len ? maxAns : len;
        }
    }
    return maxAns;
}