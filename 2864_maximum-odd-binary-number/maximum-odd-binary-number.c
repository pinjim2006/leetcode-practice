char* maximumOddBinaryNumber(char* s) {
    static char result[101];
    int len = 0;
    int countZero = 0, countOne = 0;
    for(int i = 0; s[i] != '\0'; i++){
        len++;
        if(s[i] == '0') countZero++;
        else countOne++;
    }
    result[len] = '\0';
    result[len - 1] = '1';
    for(int i = 0; i < countOne - 1; i++){
        result[i] = '1';
    }
    for(int i = countOne - 1; i < len - 1; i++){
        result[i] = '0';
    }
    return result;
}