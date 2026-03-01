bool scoreBalance(char* s) {
    int left = s[0] - 'a' + 1;
    int right = 0;
    int len = 1;
    for(int i = 1; s[i] != '\0'; i++){
        len++;
        right += s[i] - 'a' + 1;
    }
    for(int i = 1; i < len; i++){
        if(left == right) return true;
        left += s[i] - 'a' + 1;
        right -= s[i] - 'a' + 1;
    }
    return false;
}