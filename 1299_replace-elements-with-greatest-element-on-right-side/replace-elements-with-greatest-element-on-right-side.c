/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* replaceElements(int* arr, int arrSize, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * arrSize);
    *returnSize = arrSize;
    int stack[arrSize + 1];
    int top = 0;
    stack[0] = -1;
    for(int i = arrSize - 1; i >= 0; i--){
        if(arr[i] >= stack[top]){
            top++;
            stack[top] = arr[i];
        }
    }
    for(int i = 0; i < arrSize; i++){
        if(arr[i] == stack[top]) top--;
        result[i] = stack[top];
    }
    return result;
}