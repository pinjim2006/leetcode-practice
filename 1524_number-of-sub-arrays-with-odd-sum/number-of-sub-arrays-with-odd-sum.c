int numOfSubarrays(int* arr, int arrSize) {
    const int MOD = 1000000007;
    int preSum = 0;
    int preOdd = 0;
    for(int i = 0; i < arrSize; i++){
        preSum += arr[i];
        preOdd += preSum % 2;
    }
    long long odd = preOdd;
    long long even = arrSize + 1 - preOdd;
    return (preOdd * even) % MOD;
}