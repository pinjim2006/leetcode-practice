int cmp(const void *a,const void *b){
    return *(char*)a-*(char*)b;
}

bool isAnagram(char* s, char* t) {
    if(strlen(s)!=strlen(t)) return 0;
    qsort(s,strlen(s),sizeof(char),cmp);
    qsort(t,strlen(t),sizeof(char),cmp);
    for(int i=0;i<strlen(s);i++){
        if(s[i]!=t[i]) return 0;
    }
    return 1;
}

/*
bool isAnagram(char* s, char* t) {
    int n=0,a=0,b=0;
    for(int i=0;i<strlen(s);i++){
        n^=s[i];
        a+=s[i];
    }
    for(int i=0;i<strlen(t);i++){
        n^=t[i];
        b+=t[i];
    }
    return n==0&&a==b;
}
*/