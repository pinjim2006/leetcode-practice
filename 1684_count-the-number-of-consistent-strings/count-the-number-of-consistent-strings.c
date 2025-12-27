int countConsistentStrings(char * allowed, char ** words, int wordsSize){
    int check[26];
    int ans = 0;
    memset(check, 0, sizeof(check));
    int alen = strlen(allowed);
    for(int i = 0; i < alen; i++){
        check[allowed[i] - 'a'] = 1;
    }
    for(int i = 0; i < wordsSize; i++){
        int len = strlen(words[i]);
        int flag = 1;
        for(int j = 0; j < len; j++){
            if(check[words[i][j] - 'a'] == 0){
                flag = 0;
                break;
            }
        }
        if(flag) ans++;
    }
    return ans;
}