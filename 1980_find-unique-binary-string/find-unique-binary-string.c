char* findDifferentBinaryString(char** nums, int numsSize) {
    static char ans[20];
    for(int i = 0; i < numsSize; i++){
        ans[i] = nums[i][i] == '0' ? '1' : '0';
    }
    ans[numsSize] = '\0';
    return ans;
}