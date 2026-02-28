bool checkZeroOnes(char* s) {
    int len1 = 0;
    int len0 = 0;
    int cur = 1;
    for(int i = 1; s[i - 1] != '\0'; i++){
        if(s[i] == s[i - 1]){
            cur++;
        }else{
            if(s[i - 1] == '0'){
                len0 = len0 > cur ? len0 : cur;
            }else{
                len1 = len1 > cur ? len1 : cur;
            }
            cur = 1;
        }
    }
    return len1 > len0;
}