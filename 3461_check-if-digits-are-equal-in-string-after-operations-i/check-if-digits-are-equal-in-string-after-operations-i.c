bool hasSameDigits(char* s) {
    if(strlen(s) == 2){
        return s[0] == s[1];
    }
    char subS[strlen(s)];
    for(int i = 0; i < strlen(s)-1; i++){
        subS[i] = ((s[i] - '0') + (s[i+1] - '0')) % 10 + '0';
    }
    subS[strlen(s)-1] = '\0';
    return hasSameDigits(subS);
}