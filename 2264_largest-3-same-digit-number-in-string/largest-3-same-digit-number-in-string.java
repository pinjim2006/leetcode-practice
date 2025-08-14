class Solution {
    public String largestGoodInteger(String num) {
        int len = num.length();
        int result = -1;
        for (int i = 1; i < len - 1; i++){
            if(num.charAt(i-1) == num.charAt(i) && num.charAt(i) == num.charAt(i+1)){
                result = (num.charAt(i) - '0') > result ? (num.charAt(i) - '0') : result;
            }
        }
        return result == -1 ? "" : Integer.toString(result)+Integer.toString(result)+Integer.toString(result);
    }
}