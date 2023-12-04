char* largestGoodInteger(char* num) {
    char candidate='\0';
    static char result[4];
    result[3]='\0';
    for(int i=0;i<strlen(num)-2;i++){
        if(num[i]==num[i+1]&&num[i+1]==num[i+2]){
            candidate=num[i]>candidate?num[i]:candidate;
        }
    }
    for(int i=0;i<3;i++){
        result[i]=candidate;
    }
    return result;
}