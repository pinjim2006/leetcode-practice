void moveZeroes(int* nums, int numsSize){
    int tmp[numsSize];
    for(int i=0;i<numsSize;i++){
        tmp[i]=nums[i];
        nums[i]=0;
    }
    int count=0;
    for(int i=0;i<numsSize;i++){
        if(tmp[i]!=0){
            nums[count++]=tmp[i];
        }
    }
}