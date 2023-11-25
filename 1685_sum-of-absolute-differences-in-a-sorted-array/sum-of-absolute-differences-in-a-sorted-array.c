/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getSumAbsoluteDifferences(int* nums, int numsSize, int* returnSize){
    int* result=(int*)malloc(numsSize * sizeof(int));
    *returnSize=numsSize;
    int dp[numsSize+1];
    dp[0]=0;
    for(int i=0;i<numsSize;i++){
        dp[i+1]=dp[i]+nums[i];
    }
    for(int i=0;i<numsSize;i++){
        result[i]=0;
        result[i]+=(dp[numsSize]-dp[i])-nums[i]*(numsSize-i);
        result[i]+=nums[i]*i-dp[i];
    }
    return result;
}