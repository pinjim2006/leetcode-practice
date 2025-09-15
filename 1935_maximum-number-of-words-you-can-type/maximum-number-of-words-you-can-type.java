class Solution {
    public int canBeTypedWords(String text, String brokenLetters) {
        String[] words = text.split(" ");
        int count = 0;
        Set<Character> broken = new HashSet<>();
        for(char c : brokenLetters.toCharArray()){
            broken.add(c);
        }
        for(String s : words){
            boolean check = true;
            for(char c : s.toCharArray()){
                if(broken.contains(c)){
                    check = false;
                    break;
                }
            }
            if(check) count++;
        }
        return count;
    }
}