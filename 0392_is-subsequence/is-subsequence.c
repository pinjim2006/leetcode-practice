bool isSubsequence(char * s, char * t){
    int sp=0,tp=0;
    while(sp<strlen(s)&&tp<strlen(t)){
        if(s[sp]==t[tp]){
            sp++;
            tp++;
        }else{
            tp++;
        }
    }
    if(sp==strlen(s)){
        return 1;
    }else{
        return 0;
    }
}