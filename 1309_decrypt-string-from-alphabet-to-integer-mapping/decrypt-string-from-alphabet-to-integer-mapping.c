char* freqAlphabets(char* s) {
    static char result[1001];
    int len = 0;
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == '#'){
            len -= 2;
            result[len++] = (s[i-2]-'0')*10 + (s[i-1]-'0') + 'a' - 1;
        }else{
            result[len++] = s[i] - '0' + 'a' - 1;
        }
    }
    result[len] = '\0';
    return result;
}