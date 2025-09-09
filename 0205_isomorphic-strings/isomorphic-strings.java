class Solution {
    public boolean isIsomorphic(String s, String t) {
        int[] sMap = new int[129];
        int[] tMap = new int[129];
        for(int i = 0; i < s.length(); i++){
            if(sMap[(int)s.charAt(i)] == 0 && tMap[(int)t.charAt(i)] == 0){
                sMap[(int)s.charAt(i)] = (int)t.charAt(i);
                tMap[(int)t.charAt(i)] = (int)s.charAt(i);
            }else if((sMap[(int)s.charAt(i)] != (int)t.charAt(i)) || (tMap[(int)t.charAt(i)] != (int)s.charAt(i))){
                return false;
            }
        }
        return true;
    }
}