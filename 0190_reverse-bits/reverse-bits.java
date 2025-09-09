class Solution {
    public int reverseBits(int n) {
        StringBuilder sb = new StringBuilder();
        int ans = 0;
        for(int i = 0; i < 32; i++){
            sb.append(n % 2);
            n /= 2;
        }
        sb = sb.reverse();
        for(int i = 31; i > 0; i--){
            if(sb.charAt(i) == '1'){
                ans += (int)Math.pow(2, i);
            }
        }
        return ans;
    }
}