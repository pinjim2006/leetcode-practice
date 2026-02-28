int largestInteger(int* nums, int numsSize, int k) {
    int count[51] = {};
    for(int i = 0; i < numsSize - k + 1; i++){
        int check[51] = {};
        for(int j = i; j < i + k; j++){
            if(check[nums[j]]) continue;
            count[nums[j]]++;
            check[nums[j]] = 1;
        }
    }
    for(int i = 50; i >= 0; i--){
        if(count[i] == 1) return i;
    }
    return -1;
}