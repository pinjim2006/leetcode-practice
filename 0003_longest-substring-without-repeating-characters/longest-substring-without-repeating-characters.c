int lengthOfLongestSubstring(char * s){
    if(strlen(s)==0||strlen(s)==1){
        return strlen(s);
    }else{
        int check[200],ans=0;
        memset(check,0,sizeof(check));
        int left=0,right=0;
        while(right<strlen(s)){
            if(check[s[right]]==1){
                while(s[left]!=s[right]){
                    check[s[left]]--;
                    left++;
                }
                left++;
                check[s[right]]--;
            }
            check[s[right]]++;
            ans=right-left+1>ans?right-left+1:ans;
            right++;
        }
        return ans;
    }
    
}