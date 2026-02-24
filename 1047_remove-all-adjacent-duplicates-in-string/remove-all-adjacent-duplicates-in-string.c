char* removeDuplicates(char* s) {
    int top = -1;
    static char stack[100002];
    for(int i = 0; s[i] != '\0'; i++){
        if(top < 0){
            stack[++top] = s[i];
        }else if(s[i] == stack[top]){
            top--;
        }else{
            stack[++top] = s[i];
        }
    }
    stack[++top] = '\0';
    return stack;
}