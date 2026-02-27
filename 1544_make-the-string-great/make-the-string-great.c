char* makeGood(char* s) {
    static char result[101];
    int len = 1;
    result[0] = s[0];
    for(int i = 1; s[i] != '\0'; i++){
        if(len == 0){
            result[len++] = s[i];
        }else if(abs(s[i] - result[len - 1]) == 32){
            len--;
        }else{
            result[len++] = s[i];
        }
    }
    result[len] = '\0';
    return result;
}