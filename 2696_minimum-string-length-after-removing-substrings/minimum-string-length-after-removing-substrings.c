int minLength(char* s) {
    char sub[101];
    int len = 0;
    for(int i = 0; s[i] != '\0'; i++){
        if(len == 0) sub[len++] = s[i];
        else if(sub[len - 1] == 'A' && s[i] == 'B') len--;
        else if(sub[len - 1] == 'C' && s[i] == 'D') len--;
        else sub[len++] = s[i];
    }
    return len;
}