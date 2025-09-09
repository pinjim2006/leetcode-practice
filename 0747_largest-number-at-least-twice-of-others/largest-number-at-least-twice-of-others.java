class Solution {
    public int dominantIndex(int[] nums) {
        int max = -1, secondMax = -1, local = -1;
        for(int i = 0; i < nums.length; i++){
            if(nums[i] > max){
                secondMax = max;
                max = nums[i];
                local = i;
            }else if(nums[i] > secondMax){
                secondMax = nums[i];
            }
        }
        return max >= secondMax * 2 ? local : -1;
    }
}