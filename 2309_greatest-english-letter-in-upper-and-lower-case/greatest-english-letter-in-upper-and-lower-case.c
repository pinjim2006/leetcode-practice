char* greatestLetter(char* s) {
    int check[26] = {};
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] <= 'Z'){
            if(check[s[i] - 'A'] == 0) check[s[i] - 'A'] = 1;
            else if(check[s[i] - 'A'] == 2) check[s[i] - 'A'] = 3;
        }else{
            if(check[s[i] - 'a'] == 0) check[s[i] - 'a'] = 2;
            else if(check[s[i] - 'a'] == 1) check[s[i] - 'a'] = 3;
        }
    }
    static char result[2];
    for(int i = 25; i >= 0; i--){
        if(check[i] == 3){
            result[0] = 'A' + i;
            result[1] = '\0';
            return result;
        }
    }
    result[0] = '\0';
    return result;
}