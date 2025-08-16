class Solution {
    public int maximum69Number (int num) {
        StringBuilder s = new StringBuilder(String.valueOf(num));
        for(int i = 0; i < s.length(); i++){
            if(s.charAt(i) == '6'){
                s.deleteCharAt(i);
                s.insert(i, '9');
                break;
            }
        }
        return Integer.valueOf(s.toString());
    }
}