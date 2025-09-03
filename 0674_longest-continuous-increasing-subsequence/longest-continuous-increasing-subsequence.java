class Solution {
    public int findLengthOfLCIS(int[] nums) {
        int maxLength = 1;
        int count = 1;
        for(int i = 1; i < nums.length; i++){
            if(nums[i] > nums[i-1]){
                count++;
            }else{
                maxLength = count > maxLength ? count : maxLength;
                count = 1;
            }
        }
        maxLength = count > maxLength ? count : maxLength;
        return maxLength;
    }
}