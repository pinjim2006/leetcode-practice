class Solution {
    public int isPrefixOfWord(String sentence, String searchWord) {
        String[] words = sentence.split("\\s+");
        int len = searchWord.length();
        int cur = 0;
        for(String word : words){
            cur++;
            if(word.length() < len) continue;
            if(word.startsWith(searchWord)) return cur;
        }
        return -1;
    }
}