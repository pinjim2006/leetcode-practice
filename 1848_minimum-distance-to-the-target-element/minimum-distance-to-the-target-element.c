#define max(a,b) (((a)>(b))?(a):(b))

int getMinDistance(int* nums, int numsSize, int target, int start) {
    for(int i = 0; i < max(start + 1, numsSize - start); i++){
        if(start - i >= 0){
            if(nums[start - i] == target) return i;
        }
        if(start + i < numsSize){
            if(nums[start + i] == target) return i;
        }
    }
    return -1;
}