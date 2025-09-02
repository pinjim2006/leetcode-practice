class Solution {
    public int totalHammingDistance(int[] nums) {
        int ans = 0;
        for(int i = 0; i < 32; i++){
            int[] count = {0, 0};
            for(int j = 0; j < nums.length; j++){
                count[nums[j] & 1]++;
                nums[j] >>= 1;
            }
            ans += count[0] * count[1];
        }
        return ans;
    }
}