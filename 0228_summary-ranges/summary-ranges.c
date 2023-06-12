/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** summaryRanges(int* nums, int numsSize, int* returnSize){
    if(numsSize==0){
        *returnSize=0;
        return 0;
    }else{
        char** str=(char**)malloc(numsSize*sizeof(char*));
        int count=0;
        int start=nums[0],end=nums[0];
        for(int i=1;i<numsSize;i++){
            if(nums[i]==end+1){
                end=nums[i];
            }else{
                str[count]=(char*)malloc(25*sizeof(char));
                if(start==end){
                    sprintf(str[count],"%d",end);
                }else{
                    sprintf(str[count],"%d->%d",start,end);
                }
                count++;
                start=end=nums[i];
            }
        }
        str[count]=(char*)malloc(25*sizeof(char));
        if(start==end){
            sprintf(str[count],"%d",end);
        }else{
            sprintf(str[count],"%d->%d",start,end);
        }
        count++;
        *returnSize=count;
        return str;
    }  
}