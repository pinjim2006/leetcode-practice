class Solution {
    public int arraySign(int[] nums) {
        boolean result = true;
        for(int num : nums){
            if (num == 0){
                return 0;
            }else if (num < 0){
                result = !result;
            }
        }
        return result ? 1 : -1;
    }
}