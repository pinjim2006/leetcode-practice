bool repeatedSubstringPattern(char * s){
    bool ans=0;
    if(strlen(s)==2){
        if(s[0]==s[1]){
            ans=1;
        }
    }else{
        for(int i=1;i<=strlen(s)/2;i++){
            if(strlen(s)%i!=0){
                continue;
            }
            int flag=0;
            for(int j=0;j<i;j++){
                for(int k=1;k<strlen(s)/i;k++){
                    if(s[0+j]!=s[i*k+j]){
                        break;
                    }else{
                        flag++;
                    }
                }
            }
            if(flag==strlen(s)-i){
                ans=1;
                break;
            }
        }
    }
    return ans;
}