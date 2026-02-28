char* clearDigits(char* s) {
    static char result[101];
    int len = 0;
    for(int i = 0; s[i] != '\0'; i++){
        if(isdigit(s[i])){
            len--;
        }else{
            result[len++] = s[i];
        }
    }
    result[len] = '\0';
    return result;
}