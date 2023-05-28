int lengthOfLastWord(char * s){
    int i=strlen(s)-1;
    while(s[i]==' '){
        i-=1;
    }
    int a=i;
    while(s[i]!=' '&&i>0){
        i-=1;
    }
    if(i==0){
        if(s[i]!=' '){
            i-=1;
        }
    }
    return a-i;
}