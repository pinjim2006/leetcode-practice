/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* applyOperations(int* nums, int numsSize, int* returnSize){
    for(int i=0;i<numsSize-1;i++){
        if(nums[i]==nums[i+1]){
            nums[i]*=2;
            nums[i+1]=0;
        }
    }
    int* result=(int*)malloc(numsSize*sizeof(int));
    int c=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=0){
            result[c++]=nums[i];
        }
    }
    for(int i=c;i<numsSize;i++){
        result[c++]=0;
    }
    *returnSize=numsSize;
    return result;
}