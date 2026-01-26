/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int cmp(const void* a, const void* b){
    return *(int*)a - *(int*)b;
}

int** minimumAbsDifference(int* arr, int arrSize, int* returnSize, int** returnColumnSizes) {
    qsort(arr, arrSize, sizeof(int), cmp);
    int minAbs = 10000000;
    int minLoc[100000];
    int minCount = 0;

    for(int i = 1; i < arrSize; i++){
        if((arr[i] - arr[i-1]) < minAbs){
            minCount = 0;
            minAbs = arr[i] - arr[i-1];
            minLoc[minCount++] = i;
        }else if((arr[i] - arr[i-1]) == minAbs){
            minLoc[minCount++] = i;
        }
    }

    *returnSize = minCount;
    *returnColumnSizes = (int*)malloc(sizeof(int) * (*returnSize));
    int** result = (int**)malloc(sizeof(int*) * minCount);
    for(int i = 0; i < minCount; i++){
        (*returnColumnSizes)[i] = 2;
        result[i] = (int*)malloc(sizeof(int) * 2);
    }

    for(int i = 0; i < minCount; i++){
        result[i][0] = arr[minLoc[i]-1];
        result[i][1] = arr[minLoc[i]];
    }
    return result;
}