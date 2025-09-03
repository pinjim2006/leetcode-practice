class Solution {
    public int uniqueMorseRepresentations(String[] words) {
        String[] table = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        Set<String> set = new HashSet<>();
        for(int i = 0; i < words.length; i++){
            String tmp = new String();
            for(char c : words[i].toCharArray()){
                tmp += table[c - 'a'];
            }
            set.add(tmp);
        }
        return set.size();
    }
}