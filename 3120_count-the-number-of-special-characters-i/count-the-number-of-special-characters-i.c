int numberOfSpecialChars(char* word) {
    int check[26] = {};
    for(int i = 0; word[i] != '\0'; i++){
        if(word[i] >= 'a') check[word[i] - 'a'] |= 1;
        else check[word[i] - 'A'] |= 2;
    }
    int ans = 0;
    for(int i = 0; i < 26; i++){
        if(check[i] == 3) ans++;
    }
    return ans;
}