char* trimTrailingVowels(char* s) {
    int len = strlen(s);
    for(int i = len - 1; i >= 0; i--){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            s[i] = '\0';
        }else{
            return s;
        }
    }
    return "";
}