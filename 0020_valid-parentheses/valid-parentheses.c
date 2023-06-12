bool isValid(char * s){
    char stack[strlen(s)];
    int top=-1;
    bool ans=1;
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='('||s[i]=='['||s[i]=='{'){
            stack[++top]=s[i];
        }else{
            if(top==-1){
                return 0;
            }
            if(s[i]==')'&&stack[top]!='(' || s[i]==']'&&stack[top]!='[' || s[i]=='}'&&stack[top]!='{'){
                return 0;
            }
            top--;
        }
    }
    return top==-1;
}