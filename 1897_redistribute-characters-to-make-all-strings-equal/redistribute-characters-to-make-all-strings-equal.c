bool makeEqual(char** words, int wordsSize) {
    int count[26];
    memset(count,0,sizeof(count));
    for(int i=0;i<wordsSize;i++){
        for(int j=0;j<strlen(words[i]);j++){
            count[words[i][j]-'a']++;
        }
    }
    for(int i=0;i<26;i++){
        if(count[i]%wordsSize){
            return 0;
        }
    }
    return 1;
}