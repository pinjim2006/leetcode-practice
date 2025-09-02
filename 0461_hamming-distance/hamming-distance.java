class Solution {
    public int hammingDistance(int x, int y) {
        int result = x ^ y;
        int ans = 0;

        while(result > 0){
            ans += result & 1;
            result >>= 1;
        }
        return ans;
    }
}