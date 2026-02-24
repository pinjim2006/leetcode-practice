char* removeOuterParentheses(char* s) {
    int cur = 0;
    int len = 0;
    static char result[100005];
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == ')') cur--;
        if(cur != 0) result[len++] = s[i];
        if(s[i] == '(') cur++;
    }
    result[len] = '\0';
    return result;
}