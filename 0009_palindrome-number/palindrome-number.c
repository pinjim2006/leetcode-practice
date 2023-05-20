bool isPalindrome(int x){
    int len;
    char str[12];
    if(x<0){
        return false;
    }else if(x==0){
        return true;
    }else{
        sprintf(str,"%d",x);
        len=strlen(str);
        int flag=0;
        for(int i=0;i<len/2;i++){
            if(str[i]!=str[len-1-i]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            return true;
        }else{
            return false;
        }
    }
    
}