char * toLowerCase(char * s){
    char* ans=(char*)malloc(sizeof(char)*(strlen(s)+1));
    strcpy(ans,s);
    for(int i=0;i<strlen(s);i++){
        if(ans[i]<91&&ans[i]>64){
            ans[i]+=32;
        }
    }
    return ans;
}