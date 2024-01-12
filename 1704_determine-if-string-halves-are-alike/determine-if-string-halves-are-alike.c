bool halvesAreAlike(char* s) {
   int count[2]={0,0};
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            if(i>=strlen(s)/2) count[1]++;
            else count[0]++;
        }
    }
    return count[0]==count[1];
}