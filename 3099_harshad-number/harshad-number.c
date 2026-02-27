int sumOfTheDigitsOfHarshadNumber(int x) {
    int tmp = x;
    int n = 0;
    while(tmp){
        n += tmp % 10;
        tmp /= 10;
    }
    return x % n == 0 ? n : -1;
}