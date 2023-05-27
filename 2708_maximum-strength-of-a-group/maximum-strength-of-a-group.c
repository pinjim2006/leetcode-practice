long long maxStrength(int* nums, int numsSize){
    long long ans=1;
    for(int i=0;i<numsSize;i++){
        for(int j=0;j<numsSize-i-1;j++){
            if(nums[j]>nums[j+1]){
                int tmp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=tmp;
            }
        }
    }
    int a=0;
    while(nums[a]<0&&a<numsSize-1){
        a+=1;
    }
    if(nums[numsSize-1]<0){
        a+=1;
    }
    int times=0;
    if(a%2==1){
        for(int i=0;i<a-1;i++){
            ans*=nums[i];
            times+=1;
        }
    }else{
        for(int i=0;i<a;i++){
            ans*=nums[i];
            times+=1;
        }
    }
    for(int i=a;i<numsSize;i++){
        if(nums[i]==0){
            continue;
        }else{
            ans*=nums[i];
            times+=1;
        }
    }
    if(times<1){
        if(nums[numsSize-1]==0){
            ans=0;
        }else{
            ans*=nums[0];
        }
    }
    return ans;
}