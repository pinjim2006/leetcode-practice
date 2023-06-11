char * smallestString(char * s){
    int a=0;
    bool check=1;
    static char ans[300001];
    strncpy(ans,s,strlen(s));
    ans[strlen(s)]='\0';
    
    while(ans[a]=='a'){
        a++;
    }
    while(ans[a]!='a'&&ans[a]!='\0'){
        ans[a]=ans[a]-1;
        a++;
        check=0;
    }
    if(check){
        ans[strlen(s)-1]='z';
    }
    return ans;
}