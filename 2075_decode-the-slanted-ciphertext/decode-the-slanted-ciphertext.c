char* decodeCiphertext(char* encodedText, int rows) {
    int len = strlen(encodedText);
    static char result[1000001];
    int n = len / rows;
    int l = 0;
    int loc;
    for(int i = 0; i < n; i++){
        loc = i;
        while(loc < len){
            result[l++] = encodedText[loc];
            loc += n + 1;
        }
    }
    while(l > 0 && result[l - 1] == ' '){
        l--;
    }
    result[l] = '\0';

    return result;
}