int maxLengthBetweenEqualCharacters(char* s) {
    int ans=-1;
    for(int i=0;i<strlen(s);i++){
        for(int j=strlen(s)-1;j>i;j--){
            if(s[i]==s[j]){
                ans=(j-i-1)>ans?(j-i-1):ans;
                break;
            }
        }
    }
    return ans;
}