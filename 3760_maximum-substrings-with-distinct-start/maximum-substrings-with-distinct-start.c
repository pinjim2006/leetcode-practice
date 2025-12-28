int maxDistinct(char* s) {
    int ans = 0;
    int check[26];
    memset(check, 0, sizeof(check));
    for(int i = 0; s[i] != '\0' && ans < 26; i++){
        if(check[s[i] - 'a'] == 0){
            ans++;
            check[s[i] - 'a'] = 1;
        }
    }
    return ans;
}