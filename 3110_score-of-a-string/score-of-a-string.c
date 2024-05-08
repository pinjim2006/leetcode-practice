int scoreOfString(char* s) {
    int ans=0;
    for(int i=1;i<strlen(s);i++)
        ans+=abs(s[i]-s[i-1]);
    return ans;
}