int numTrees(int n) {
    double result = 1;
    for(int i = 1; i <= n; i++){
        result *= (i+n);
        result /= i;
    }
    return result/(n+1);
}