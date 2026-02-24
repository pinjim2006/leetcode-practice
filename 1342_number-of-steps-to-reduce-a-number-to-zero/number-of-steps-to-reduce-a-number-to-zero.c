int numberOfSteps(int num) {
    int ans = -(num > 0);
    while(num){
        ans += (num & 1) + 1;
        num >>= 1;
    }
    return ans;
}