int binaryGap(int n) {
    char bin[33];
    int len = 0;
    int left = -1;
    while(n){
        bin[len] = n % 2 + '0';
        if(n % 2 && left == -1) left = len;
        len++;
        n /= 2;
    }
    bin[len] = '\0';
    int gap = 0;
    for(int i = left + 1; i < len; i++){
        if(bin[i] == '1'){
            gap = gap > (i - left) ? gap : (i - left);
            left = i;
        }
    }
    return gap;
}