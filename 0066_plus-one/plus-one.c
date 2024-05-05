/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int check = 0;
    for(int i=0; i<digitsSize; i++){
        if(digits[i] != 9){
            check = 1;
            break;
        }
    }
    if(check){
        int* result=(int*)malloc(digitsSize * sizeof(int));
        *returnSize = digitsSize;
        for(int i=0;i<digitsSize;i++){
            result[i]=digits[i];
        }
        for(int i=digitsSize-1;i>=0;i--){
            if(result[i]!=9){
                result[i]++;
                break;
            }else{
                result[i]=0;
            }
        }
        return result;
    }else{
        int* result=(int*)malloc((digitsSize+1) * sizeof(int));
        *returnSize = digitsSize+1;
        result[0]=1;
        for(int i=1;i<digitsSize+1;i++){
            result[i]=0;
        }
        return result;
    }
}