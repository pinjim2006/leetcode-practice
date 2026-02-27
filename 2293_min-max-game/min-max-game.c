#define min(a,b) a<b?a:b
#define max(a,b) a>b?a:b

int minMaxGame(int* nums, int numsSize) {
    if(numsSize == 1) return nums[0];
    for(int i = 0; i < numsSize / 2; i++){
        if(i % 2 == 0){
            nums[i] = min(nums[i*2], nums[i*2+1]);
        }else{
            nums[i] = max(nums[i*2], nums[i*2+1]);
        }
    }
    return minMaxGame(nums, numsSize / 2);
}