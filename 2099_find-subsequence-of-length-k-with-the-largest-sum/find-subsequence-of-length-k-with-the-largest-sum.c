/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
typedef struct{
    int val;
    int index;
}Node;

int cmpByVal(const void* a, const void* b){
    return ((Node*)b)->val - ((Node*)a)->val;
}

int cmpByIndex(const void* a, const void* b){
    return ((Node*)a)->index - ((Node*)b)->index;
}

int* maxSubsequence(int* nums, int numsSize, int k, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * k);
    (*returnSize) = k;
    Node nodes[numsSize];
    for(int i = 0; i < numsSize; i++){
        nodes[i].val = nums[i];
        nodes[i].index = i;
    }
    qsort(nodes, numsSize, sizeof(Node), cmpByVal);
    qsort(nodes, k, sizeof(Node), cmpByIndex);
    for(int i = 0; i < k; i++){
        result[i] = nodes[i].val;
    }
    return result;
}