char* reverseWords(char* s) {
    int len = 0;
    int left = 0;
    static char result[50001];
    for(int i = 1; s[i - 1] != '\0'; i++){
        if(s[i] == ' ' || s[i] == '\0'){
            for(int j = i - 1; j >= left; j--){
                result[len++] = s[j];
            }
            result[len++] = s[i];
            left = i + 1;
        }
    }
    return result;
}