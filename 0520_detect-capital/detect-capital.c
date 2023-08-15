bool detectCapitalUse(char * word){
    if(strlen(word)==1){
        return 1;
    }
    if(word[0]>=65&&word[0]<=90){
        if(word[1]>=65&&word[1]<=90){
            for(int i=1;i<strlen(word);i++){
                if(word[i]>=97&&word[i]<=122){
                    return 0;
                }
            }
        }else{
            for(int i=1;i<strlen(word);i++){
                if(word[i]>=65&&word[i]<=90){
                    return 0;
                }
            }
        }
    }else{
        for(int i=1;i<strlen(word);i++){
            if(word[i]>=65&&word[i]<=90){
                return 0;
            }
        }
    }
    return 1;
}