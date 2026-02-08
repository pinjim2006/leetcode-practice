/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** subsets(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    int total = 1 << numsSize;
    int** result = (int**)malloc(sizeof(int*) * total);
    (*returnColumnSizes) = (int*)malloc(sizeof(int) * total);
    (*returnSize) = total;

    for(int i = 0; i < total; i++){
        int size = 0;
        for(int j = 0; j < numsSize; j++){
            size += (i >> j) & 1;
        }

        (*returnColumnSizes)[i] = size;
        result[i] = (int*)malloc(sizeof(int) * size);

        int count = 0;
        for(int j = 0; j < numsSize; j++){
            if((i >> j) & 1){
                result[i][count++] = nums[j];
            }
        }
    }

    return result;
}