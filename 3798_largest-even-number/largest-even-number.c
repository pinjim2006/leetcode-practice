char* largestEven(char* s) {
    int len = strlen(s);
    int i;
    for(i = len - 1; i >= 0; i--){
        if(s[i] == '2'){
            s[i+1] = '\0';
            return s;
        }
    }
    return "";
}