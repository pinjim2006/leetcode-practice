int reverseDegree(char* s) {
    int ans = 0;
    for(int i = 0; s[i] != '\0'; i++){
        ans += ('z' - s[i] + 1) * (i + 1);
    }
    return ans;
}