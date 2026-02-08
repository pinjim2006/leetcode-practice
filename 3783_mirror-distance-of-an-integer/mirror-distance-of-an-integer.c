int mirrorDistance(int n) {
    int mirror = 0;
    int initN = n;
    while(n){
        mirror *= 10;
        mirror += n % 10;
        n /= 10;
    }
    return abs(mirror - initN);
}