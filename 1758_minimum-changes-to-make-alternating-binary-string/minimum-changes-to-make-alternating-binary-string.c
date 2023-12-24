int minOperations(char* s) {
    int a=0,b=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]-'0'==i%2){
            a++;
        }else{
            b++;
        }
    }
    return a<b?a:b;
}