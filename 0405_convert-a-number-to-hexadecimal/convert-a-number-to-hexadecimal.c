char* toHex(int num) {
    if(num == 0) return "0";
    static char result[33];
    int len = 0;
    unsigned int n = (unsigned int)num;
    while(n){
        int tmp = n % 16;
        n /= 16;
        if(tmp < 10){
            result[len++] = tmp + '0';
        }else{
            result[len++] = (tmp % 10) + 'a';
        }
    }
    for(int i = 0; i < len / 2; i++){
        char tmp = result[i];
        result[i] = result[len - i - 1];
        result[len - i - 1] = tmp;
    }
    result[len] = '\0';
    return result;
}