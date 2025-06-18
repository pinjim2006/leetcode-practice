class Solution {
    public String mergeAlternately(String word1, String word2) {
        StringBuilder result = new StringBuilder();
        if (word1.length() >= word2.length()){
            result.append(word1);
            for(int i = word2.length(); i > 0; i--){
                result.insert(i, word2.charAt(i-1));
            }
        }else{
            result.append(word2);
            for(int i = word1.length()-1; i >= 0; i--){
                result.insert(i, word1.charAt(i));
            }
        }

        return result.toString();
    }
}