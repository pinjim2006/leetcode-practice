int countDigits(int num) {
    int digits = num;
    int ans = 0;
    while(digits > 0){
        int tmp = digits % 10;
        if(num % tmp == 0) ans++;
        digits /= 10;
    }
    return ans;
}