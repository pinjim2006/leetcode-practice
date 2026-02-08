bool isBalanced(char* s) {
    int even = 0, odd = 0;
    for(int i = 0; s[i] != '\0'; i++){
        if(i % 2){
            even += s[i] - '0';
        }else{
            odd += s[i] - '0';
        }
    }
    return even == odd;
}