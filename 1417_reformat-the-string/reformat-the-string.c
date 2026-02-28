char* reformat(char* s) {
    char digits[501];
    char letters[501];
    int countDigit = 0;
    int countLetter = 0;
    for(int i = 0; s[i] != '\0'; i++){
        if(isdigit(s[i])){
            digits[countDigit++] = s[i];
        }else{
            letters[countLetter++] = s[i];
        }
    }
    if(abs(countDigit - countLetter) > 1) return "";
    static char result[501];
    if(countDigit > countLetter){
        for(int i = 0; i < countLetter; i++){
            result[i*2] = digits[i];
            result[i*2+1] = letters[i];
        }
        result[countLetter*2] = digits[countLetter];
        result[countLetter*2+1] = '\0';
    }else if(countDigit == countLetter){
        for(int i = 0; i < countLetter; i++){
            result[i*2] = digits[i];
            result[i*2+1] = letters[i];
        }
        result[countLetter*2] = '\0';
    }else{
        for(int i = 0; i < countDigit; i++){
            result[i*2] = letters[i];
            result[i*2+1] = digits[i];
        }
        result[countDigit*2] = letters[countDigit];
        result[countDigit*2+1] = '\0';
    }
    return result;
}