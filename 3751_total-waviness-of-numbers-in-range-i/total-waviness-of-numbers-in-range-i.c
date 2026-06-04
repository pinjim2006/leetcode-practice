int countWave(int n){
    int digits[10];
    int len = 0;

    while(n){
        digits[len++] = n % 10;
        n /= 10;
    }
    
    int wave = 0;
    for(int i = 1; i < len - 1; i++){
        if((digits[i - 1] < digits[i] && digits[i + 1] < digits[i]) || (digits[i - 1] > digits[i] && digits[i + 1] > digits[i])) wave++;
    }
    return wave;
}

int totalWaviness(int num1, int num2) {
    int ans = 0;
    for(int i = num1; i <= num2; i++){
        ans += countWave(i);
    }
    return ans;
}