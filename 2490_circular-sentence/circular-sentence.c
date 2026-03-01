bool isCircularSentence(char* sentence) {
    int len = 0;
    for(int i = 0; sentence[i] != '\0'; i++){
        if(sentence[i] == ' '){
            if(sentence[i - 1] != sentence[i + 1]) return false;
        }
        len++;
    }
    return sentence[0] == sentence[len - 1];
}