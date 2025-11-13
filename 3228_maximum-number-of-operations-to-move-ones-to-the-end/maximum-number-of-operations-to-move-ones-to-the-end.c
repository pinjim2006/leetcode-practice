int maxOperations(char* s) {
    int len = strlen(s);
    int ans = 0;
    int countOne = 0;
    for(int i = 0; i < len; i++) if(s[i] == '1') countOne++;
    int count = 0;
    for(int i = len - 1; i >= 0; ){
        if(s[i] == '1'){
            count++;
            i--;
            continue;
        }else{
            ans += countOne - count;
            while(i >= 0 && s[i] == '0') i--;
        }
    }
    return ans;
}