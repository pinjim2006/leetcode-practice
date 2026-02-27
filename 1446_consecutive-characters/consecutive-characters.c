int maxPower(char* s) {
    int maxLength = 1;
    int curLength = 1;
    for(int i = 1; s[i] != '\0'; i++){
        if(s[i] == s[i-1]){
            curLength++;
        }else{
            maxLength = maxLength > curLength ? maxLength : curLength;
            curLength = 1;
        }
    }
    maxLength = maxLength > curLength ? maxLength : curLength;
    return maxLength;
}