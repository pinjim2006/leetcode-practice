int mostWordsFound(char** sentences, int sentencesSize) {
    int ans = 1;
    for(int i = 0; i < sentencesSize; i++){
        int cur = 1;
        for(int j = 0; sentences[i][j] != '\0'; j++){
            if(sentences[i][j] == ' ') cur++;
        }
        ans = cur > ans ? cur : ans;
    }
    return ans;
}