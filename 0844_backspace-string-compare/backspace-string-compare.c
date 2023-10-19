bool backspaceCompare(char * s, char * t){
    char a[250],b[250];
    int A=0,B=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='#'&&A==0){
            //
        }else if(s[i]=='#'){
            a[A-1]=0;
            A--;
        }else{
            a[A]=s[i];
            A++;
        }
    }
    a[A]='\0';
    for(int i=0;i<strlen(t);i++){
        if(t[i]=='#'&&B==0){
            //
        }else if(t[i]=='#'){
            b[B-1]=0;
            B--;
        }else{
            b[B]=t[i];
            B++;
        }
    }
    b[B]='\0';

    if(strlen(a)!=strlen(b)){
        return 0;
    }else{
        for(int i=0;i<strlen(a);i++){
            if(a[i]!=b[i]){
                return 0;
            }
        }
        return 1;
    }
}