


typedef struct {
    int prefix[10001];
} NumArray;


NumArray* numArrayCreate(int* nums, int numsSize) {
    NumArray* newNumArray = (NumArray*)malloc(sizeof(NumArray));
    newNumArray->prefix[0] = 0;
    for(int i = 0; i < numsSize; i++){
        newNumArray->prefix[i+1] = newNumArray->prefix[i] + nums[i];
    }
    return newNumArray;
}

int numArraySumRange(NumArray* obj, int left, int right) {
    return obj->prefix[right+1] - obj->prefix[left];
}

void numArrayFree(NumArray* obj) {
    free(obj);
}

/**
 * Your NumArray struct will be instantiated and called as such:
 * NumArray* obj = numArrayCreate(nums, numsSize);
 * int param_1 = numArraySumRange(obj, left, right);
 
 * numArrayFree(obj);
*/