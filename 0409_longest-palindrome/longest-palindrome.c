int longestPalindrome(char * s){
    int ans=0;
    int c[52];
    memset(c,0,sizeof(c));
    for(int i=0;i<strlen(s);i++){
        if(s[i]<91){
            c[s[i]-'A']++;
        }else{
            c[s[i]-'a'+26]++;
        }
    }
    bool flag=0;
    for(int i=0;i<52;i++){
        if(c[i]%2==1){
            ans+=c[i]-1;
            flag=1;
        }else{
            ans+=c[i];
        }
    }
    if(flag){
        ans+=1;
    }
    return ans;
}