int digitFrequencyScore(int n) {
    int count[10] = {};
    int ans = 0;
    while(n){
        count[n % 10]++;
        n /= 10;
    }
    for(int i = 1; i < 10; i++){
        ans += i * count[i];
    }
    return ans;
}