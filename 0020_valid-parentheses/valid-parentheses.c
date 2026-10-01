bool isValid(char* s) {
    char stack[10001];
    int top = -1;
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            stack[++top] = s[i];
        }else if(s[i] == ')'){
            if(top == -1 || stack[top] != '(') return false;
            else top--;
        }else if(s[i] == ']'){
            if(top == -1 || stack[top] != '[') return false;
            else top--;
        }else if(s[i] == '}'){
            if(top == -1 || stack[top] != '{') return false;
            else top--;
        }
    }
    return top == -1;
}