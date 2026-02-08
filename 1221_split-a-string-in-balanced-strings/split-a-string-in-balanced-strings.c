int balancedStringSplit(char* s) {
    int ans = 0;
    int cur = 0;
    for(int i = 0; s[i] != '\0'; i++){
        cur += s[i] == 'R' ? 1 : -1;
        if(cur == 0) ans++;
    }
    return ans;
}