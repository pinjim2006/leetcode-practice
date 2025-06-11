class Solution {
    public int titleToNumber(String columnTitle) {
        int result = 0;
        for(int i = 0; i < columnTitle.length(); i++){
            result += ( columnTitle.charAt(columnTitle.length() - i - 1) - '@' ) * Math.pow(26, i);
        }
        return result;
    }
}