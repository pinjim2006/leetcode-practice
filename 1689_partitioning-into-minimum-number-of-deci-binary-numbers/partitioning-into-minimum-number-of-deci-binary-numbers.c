int minPartitions(char* n) {
    int ans = 0;
    int len = strlen(n);
    for(int i = 0; i < len && ans < 9; i++){
        if(n[i] - '0' > ans) ans = n[i] - '0';
    }
    return ans;
}