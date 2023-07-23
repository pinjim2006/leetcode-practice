/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* separateDigits(int* nums, int numsSize, int* returnSize){
    int total=0;
    for(int i=0;i<numsSize;i++){
        int num=nums[i];
        while(num>0){
            num/=10;
            total++;
        }
    }
    int count=0;
    int* result=(int*)malloc(total*sizeof(int));
    for(int i=0;i<numsSize;i++){
        int turn[6],c=0;
        while(nums[i]>0){
            turn[c++]=nums[i]%10;
            nums[i]/=10;
        }
        for(int i=0;i<c;i++){
            result[count++]=turn[c-i-1];
        }
    }
    *returnSize=total;
    return result;
}