bool repeatedSubstringPattern(char * s){
    bool ans = 0;
    int len = strlen(s);
    if(len == 2){
        if(s[0] == s[1]){
            ans = 1;
        }
    }else{
        for(int i = 1; i <= len / 2; i++){
            if(len % i != 0){
                continue;
            }
            int flag = 0;
            for(int j = 0; j < i; j++){
                for(int k = 1; k < len / i; k++){
                    if(s[0 + j] != s[i * k + j]){
                        break;
                    }else{
                        flag++;
                    }
                }
            }
            if(flag == len - i){
                ans = 1;
                break;
            }
        }
    }
    return ans;
}