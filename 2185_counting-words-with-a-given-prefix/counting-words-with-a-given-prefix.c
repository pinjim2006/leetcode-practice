int prefixCount(char** words, int wordsSize, char* pref) {
    int prefLen = strlen(pref);
    int ans = 0;
    for(int i = 0; i < wordsSize; i++){
        int check = 1;
        for(int j = 0; j < prefLen; j++){
            if(words[i][j] == '\0' || words[i][j] != pref[j]){
                check = 0;
                break;
            }
        }
        ans += check;
    }
    return ans;
}