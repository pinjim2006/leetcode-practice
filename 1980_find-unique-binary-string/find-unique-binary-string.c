int binToDec(char* s, int len){
    int result = 0;
    for(int i = 0; i < len; i++){
        result *= 2;
        result += s[i] - '0';
    }
    return result;
}

int cmp(const void* a, const void* b){
    return *(int*)a - *(int*)b;
}

char* findDifferentBinaryString(char** nums, int numsSize) {
    int len = strlen(nums[0]);
    int numbers[numsSize];
    for(int i = 0; i < numsSize; i++){
        numbers[i] = binToDec(nums[i], len);
    }
    qsort(numbers, numsSize, sizeof(int), cmp);
    int n = (int)pow(2, len);
    int result = n - 1;
    int count = 0;
    for(int i = 0; i < n && count < numsSize; i++){
        if(numbers[count] == i){
            count++;
        }else{
            result = i;
            break;
        }
    }
    static char ans[20];
    for(int i = len - 1; i >= 0; i--){
        ans[i] = result % 2 + '0';
        result /= 2;
    }
    ans[len] = '\0';
    return ans;
}