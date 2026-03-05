int product(int n){
    int result = 1;
    while(n){
        result *= n % 10;
        n /= 10;
    }
    return result;
}

int smallestNumber(int n, int t) {
    while(product(n) % t){
        n++;
    }
    return n;
}