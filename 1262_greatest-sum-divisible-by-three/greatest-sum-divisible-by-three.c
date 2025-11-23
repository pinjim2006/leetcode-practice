#define min(a,b) (a)<(b)?(a):(b)

int maxSumDivThree(int* nums, int numsSize) {
    int sum = 0;
    int min1 = 100000, min2 = 100000;
    for(int i = 0; i < numsSize; i++){
        sum += nums[i];
        if(nums[i] % 3 == 1){
            min2 = min(min2, min1 + nums[i]);
            min1 = min(min1, nums[i]);
        } 
        if(nums[i] % 3 == 2){
            min1 = min(min1, min2 + nums[i]);
            min2 = min(min2, nums[i]);
        } 
    }
    if(sum % 3 == 0){
        return sum;
    }else if(sum % 3 == 1){
        return sum - min1;
    }else{
        return sum - min2;
    }
}