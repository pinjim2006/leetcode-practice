char * reverseVowels(char * s){
    int num[strlen(s)+1];
    int times=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            num[times]=i;
            times++;
        }
    }
    for(int i=0;i<times/2;i++){
        char tmp=s[num[i]];
        s[num[i]]=s[num[times-i-1]];
        s[num[times-i-1]]=tmp;
    }
    char* str = (char*)malloc(sizeof(char) * (strlen(s) + 1));
    strcpy(str,s);
    return str;
}