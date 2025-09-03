class Solution {
    public char nextGreatestLetter(char[] letters, char target) {
        int ans = 100;
        for(char c : letters){
            if (c > target){
                ans = Math.min(ans, c - target);
            }
        }
        char result;
        if(ans == 100){
            result = letters[0];
        }else{
            result = (char)(target + ans);
        }
        return result;
    }
}