char* largestOddNumber(char* num) {
    int ans=0;
    for(int i=strlen(num)-1;i>=0;i--){
        if((num[i]-'0')%2){
            ans=i+1;
            break;
        }
    }
    num[ans]='\0';
    return num;
}