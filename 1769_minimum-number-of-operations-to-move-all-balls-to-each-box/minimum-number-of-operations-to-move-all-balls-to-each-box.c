/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* minOperations(char* boxes, int* returnSize) {
    int len = strlen(boxes);

    (*returnSize) = len;
    int* result = (int*)malloc(sizeof(int) * len);
    memset(result, 0, sizeof(int) * len);

    int right = 0;
    for(int i = 1; i < len; i++){
        if(boxes[i] == '1'){
            right++;
            result[0] += i;
        }
    }
    int left = 0;

    for(int i = 1; i < len; i++){
        if(boxes[i-1] == '1'){
            left++;
        }
        result[i] = result[i-1] + left - right;
        if(boxes[i] == '1'){
            right--;
        }
    }

    return result;
}