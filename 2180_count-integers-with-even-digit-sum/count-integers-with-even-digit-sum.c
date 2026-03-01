int check(int num){
    int n = 0;
    while(num){
        n += num % 10;
        num /= 10;
    }
    return n % 2 == 0;
}

int countEven(int num) {
    if(num < 10) return num / 2;
    if(!check(num) && (num % 2 == 0)) return num / 2 - 1;
    return num / 2;
}