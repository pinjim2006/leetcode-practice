int numberOfSpecialChars(char* word) {
    int check[26] = {};
    for(int i = 0; word[i] != '\0'; i++){
        if(word[i] >= 'a'){
            if(check[word[i] - 'a'] == -1) continue;
            else if(check[word[i] - 'a'] & 1) check[word[i] - 'a'] = -1;
            else check[word[i] - 'a'] |= 2;
        }else{
            if(check[word[i] - 'A'] == -1) continue;
            else check[word[i] - 'A'] |= 1;
        }
    }
    int ans = 0;
    for(int i = 0; i < 26; i++){
        if(check[i] == 3) ans++;
    }
    return ans;
}