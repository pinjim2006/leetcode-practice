class Solution {
    public boolean areAlmostEqual(String s1, String s2) {
        char[] char1 = s1.toCharArray();
        char[] char2 = s2.toCharArray();
        int[] check = new int[2];
        int dif = 0;
        for(int i = 0; i < s1.length(); i++){
            if(char1[i] != char2[i]){
                if(dif == 2){
                    return false;
                }else{
                    check[dif] = i;
                    dif++;
                }
            }
        }
        if(dif==1){
            return false;
        }else if(( char1[check[0]] != char2[check[1]] ) || ( char1[check[1]] != char2[check[0]] )){
            return false;
        }else{
            return true;
        }
    }
}