class Solution {
    public int longestMonotonicSubarray(int[] nums) {

        int maxLength = 1;
        int incLength = 1; // 計算嚴格遞增子陣列的長度
        int decLength = 1; // 計算嚴格遞減子陣列的長度

        for (int i = 1; i < nums.length; i++) {
            if (nums[i] > nums[i - 1]) {
                incLength++; // 遞增長度 +1
                decLength = 1; // 遞減長度重置
            } else if (nums[i] < nums[i - 1]) {
                decLength++; // 遞減長度 +1
                incLength = 1; // 遞增長度重置
            } else {
                // 如果相等，兩者都重置為 1
                incLength = 1;
                decLength = 1;
            }
            maxLength = Math.max(maxLength, Math.max(incLength, decLength));
        }

        return maxLength;
    }
}