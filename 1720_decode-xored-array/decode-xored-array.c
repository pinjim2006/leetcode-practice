/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decode(int* encoded, int encodedSize, int first, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * (encodedSize + 1));
    (*returnSize) = encodedSize + 1;
    result[0] = first;
    for(int i = 0; i < encodedSize; i++){
        result[i+1] = encoded[i]^result[i];
    }
    return result;
}