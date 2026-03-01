/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decrypt(int* code, int codeSize, int k, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * codeSize);
    (*returnSize) = codeSize;
    if(k > 0){
        int cur = 0;
        int left = 1;
        int right = k + 1 < codeSize ? k + 1 : 0;
        for(int i = 1; i <= k; i++){
            cur += code[i];
        }
        result[0] = cur;
        for(int i = 1; i < codeSize; i++){
            cur -= code[left];
            cur += code[right];
            left = left + 1 < codeSize ? left + 1 : 0;
            right = right + 1 < codeSize ? right + 1 : 0;
            result[i] = cur;
        }
    }else if(k < 0){
        int cur = 0;
        int left = codeSize + k ;
        int right = codeSize - 1;
        for(int i = left; i <= right; i++){
            cur += code[i];
        }
        result[0] = cur;
        for(int i = 1; i < codeSize; i++){
            right = right + 1 < codeSize ? right + 1 : 0;
            cur -= code[left];
            cur += code[right];
            left = left + 1 < codeSize ? left + 1 : 0;
            result[i] = cur;
        }
    }else{
        for(int i = 0; i < codeSize; i++){
            result[i] = 0;
        }
    }
    return result;
}