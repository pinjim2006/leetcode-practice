int minimizedStringLength(char * s){
    int ans=0;
    int as[26];
    memset(as,0,sizeof(as));
    for(int i=0;i<strlen(s);i++){
        as[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(as[i]>0){
            ans++;
        }
    }
    return ans;
}