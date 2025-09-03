class Solution {
    public double findMaxAverage(int[] nums, int k) {
        int left = 0, right = k;
        int total = 0;
        for(int i = 0; i < k; i++){
            total += nums[i];
        }
        double maxAverage = (double)total / k;
        while(right < nums.length){
            total -= nums[left];
            left++;
            total += nums[right];
            right++;
            maxAverage = Math.max(maxAverage, (double)total / k);
        }
        return maxAverage;
    }
}