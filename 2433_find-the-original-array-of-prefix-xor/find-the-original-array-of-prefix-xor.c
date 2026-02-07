/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findArray(int* pref, int prefSize, int* returnSize) {
    (*returnSize) = prefSize;
    int* result = (int*)malloc(sizeof(int) * prefSize);

    result[0] = pref[0];
    for(int i = 1; i < prefSize; i++){
        result[i] = pref[i] ^ pref[i-1];
    }

    return result;
}