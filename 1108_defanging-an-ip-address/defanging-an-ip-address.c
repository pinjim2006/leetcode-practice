

char * defangIPaddr(char * address){
    static char result[100];
    int count=0;
    for(int i=0;i<strlen(address);i++){
        if(address[i]=='.'){
            result[count]='[';
            count++;
            result[count]='.';
            count++;
            result[count]=']';
            count++;
        }else{
            result[count]=address[i];
            count++;
        }
    }
    result[count]='\0';
    return result;
}