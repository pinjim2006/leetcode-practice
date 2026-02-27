int sumOddLengthSubarrays(int* arr, int arrSize) {
    int ans = 0;
    for(int i = 1; i <= arrSize; i += 2){
        int cur = 0;
        for(int j = 0; j < i; j++) cur += arr[j];
        ans += cur;
        for(int j = 0; j < arrSize - i; j++){
            cur -= arr[j];
            cur += arr[j + i];
            ans += cur;
        }
    }
    return ans;
}