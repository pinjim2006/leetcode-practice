class Solution {
    public int countSegments(String s) {
        int count = 0;
        boolean check = true;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) != ' ') {
                if(check){
                    check = false;
                    count++;
                }
            }else{
                check = true;
            }
        }
        return count;
    }
}