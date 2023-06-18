int compare(const void *a, const void *b) {
    int num1 = *(const int *)a;
    int num2 = *(const int *)b;
    if(num1 < num2)
        return -1;
    if(num1 > num2)
        return 1;
    return 0;
}

int findValueOfPartition(int* nums, int numsSize){
    qsort(nums,numsSize,sizeof(int),compare);
    int ans=nums[1]-nums[0];
    for(int i=0;i<numsSize-1;i++){
        if(nums[i+1]-nums[i]<ans){
            ans=nums[i+1]-nums[i];
        }        
    }
    return ans;
}