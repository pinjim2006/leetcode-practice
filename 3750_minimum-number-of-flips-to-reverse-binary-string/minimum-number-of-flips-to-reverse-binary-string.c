int minimumFlips(int n) {
    int len = 0;
    char s[32];
    while(n){
        s[len++] = n % 2;
        n /= 2;
    }
    int ans = 0;
    for(int i = 0; i < len; i++){
        ans += s[i] != s[len - i - 1];
    }
    return ans;
}