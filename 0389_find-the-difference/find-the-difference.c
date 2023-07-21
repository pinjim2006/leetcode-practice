char findTheDifference(char * s, char * t){
    char ans=0;
    for(int i=0;i<strlen(s);i++){
        ans^=s[i];
        ans^=t[i];
    }
    ans^=t[strlen(t)-1];
    return ans;
}