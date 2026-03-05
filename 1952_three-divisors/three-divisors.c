bool isPrime(int n){
    int t = (int)sqrt(n);
    for(int i = 2; i <= t; i++){
        if(n % i == 0) return false;
    }
    return true;
}

bool isThree(int n) {
    if(n == 1) return false;
    int sq = (int)sqrt(n);
    if(sq * sq == n && isPrime(sq)) return true;
    else return false;
}