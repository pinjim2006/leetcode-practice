int strStr(char * haystack, char * needle){
    int ans=-1;
    if(strlen(haystack)<strlen(needle)){
        return ans;
    }else{
        for(int i=0;i<strlen(haystack)+1-strlen(needle);i++){
            if(haystack[i]==needle[0]){
                int flag=0;
                for(int j=0;j<strlen(needle);j++){
                    if(haystack[i+j]!=needle[j]){
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    ans=i;
                    break;
                }
            }
        }
        return ans;
    }
    
}