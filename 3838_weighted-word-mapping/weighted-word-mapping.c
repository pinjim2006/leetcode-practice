char* mapWordWeights(char** words, int wordsSize, int* weights, int weightsSize) {
    static char result[101];
    for(int i = 0; i < wordsSize; i++){
        int weight = 0;
        for(int j = 0; words[i][j] != '\0'; j++){
            weight += weights[words[i][j] - 'a'];
        }
        result[i] = 'z' - (weight% 26);
    }
    result[wordsSize] = '\0';
    return result;
}