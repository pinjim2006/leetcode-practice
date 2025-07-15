class Solution {
    public boolean isValid(String word) {
        boolean v = false, c = false;
        if (word.length() < 3){
            return false;
        }
        for(int i = 0; i < word.length(); i++){
            if ((word.charAt(i) >= '0' && word.charAt(i) <= '9') || ( word.charAt(i) >= 'a' && word.charAt(i) <= 'z' ) || ( word.charAt(i) >= 'A' && word.charAt(i) <= 'Z')){
                if (word.charAt(i) == 'a' || word.charAt(i) == 'e' || word.charAt(i) == 'i' || word.charAt(i) == 'o' || word.charAt(i) == 'u' || word.charAt(i) == 'A' || word.charAt(i) == 'E' || word.charAt(i) == 'I' || word.charAt(i) == 'O' || word.charAt(i) == 'U'){
                    v = true;
                }else if ( word.charAt(i) > '9'){
                    c = true;
                }
            }else{
                return false;
            }
        }
        if (c && v) return true;
        else return false;
    }
}