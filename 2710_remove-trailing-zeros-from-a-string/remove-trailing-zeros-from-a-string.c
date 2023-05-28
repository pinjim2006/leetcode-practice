char * removeTrailingZeros(char * num){
    int a=strlen(num)-1;
    static char ans[1001];
    strcpy(ans,num);
    while(ans[a]=='0'){
        ans[a]='\0';
        a--;
    }
    return ans;
}