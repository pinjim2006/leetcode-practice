class Solution {
    public String reverseOnlyLetters(String s) {
        StringBuilder sb = new StringBuilder(s);
        int left = 0, right = s.length() - 1;
        while(left < right){
            if(Character.isLetter(sb.charAt(left)) && Character.isLetter(sb.charAt(right))){
                char tmp = sb.charAt(left);
                sb.setCharAt(left, sb.charAt(right));
                sb.setCharAt(right, tmp);
                left++;
                right--;
                continue;
            }
            if(!Character.isLetter(sb.charAt(left))){
                left++;
            }
            if(!Character.isLetter(sb.charAt(right))){
                right--;
            }
        }
        return sb.toString();
    }
}