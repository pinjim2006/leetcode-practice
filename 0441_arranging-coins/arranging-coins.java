class Solution {
    public int arrangeCoins(int n) {
        long stair = 0;
        int i = 0;
        while(stair < n){
            i++;
            stair += i;
        }
        return (stair == n) ? i : i-1;
    }
}