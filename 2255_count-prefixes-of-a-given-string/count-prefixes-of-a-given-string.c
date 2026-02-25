int countPrefixes(char** words, int wordsSize, char* s) {
    int sLen = strlen(s);
    int ans = 0;
    for(int i = 0; i < wordsSize; i++){
        int check = 1;
        for(int j = 0; words[i][j] != '\0'; j++){
            if(j == sLen || s[j] != words[i][j]){
                check = 0;
                break;
            }
        }
        ans += check;
    }
    return ans;
}