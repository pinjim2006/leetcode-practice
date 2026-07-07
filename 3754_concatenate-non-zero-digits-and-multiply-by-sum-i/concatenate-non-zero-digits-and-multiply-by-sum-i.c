long long sumAndMultiply(int n) {
    int sum = 0;
    long long result = 0;
    int count = 1;
    while(n){
        int tmp = n % 10;
        if(tmp != 0){
            sum += tmp;
            tmp *= count;
            result += tmp;
            count *= 10;
        }
        n /= 10;
    }
    result *= sum;
    return result;
}