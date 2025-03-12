class Solution {
    public int maximumCount(int[] nums) {
        int neg = 0, pos = 0;
        
        // Count negative numbers
        for (int num : nums) {
            if (num < 0) {
                neg++;
            } else if (num > 0) {
                pos++;
            }
        }

        // Return the maximum count
        return Math.max(neg, pos);
    }
}