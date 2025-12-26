class Solution {
    public boolean wordPattern(String pattern, String s) {
        String[] strs = s.split(" ");
        HashMap<Character, String> map = new HashMap<>();
        if(strs.length != pattern.length()) return false;
        for(int i = 0; i < pattern.length(); i++){
            if(map.containsKey(pattern.charAt(i))){
                if(!map.get(pattern.charAt(i)).equals(strs[i])){
                    return false;
                }
            }else if(map.containsValue(strs[i])){
                return false;
            }else{
                map.put(pattern.charAt(i), strs[i]);
            }
        }
        return true;
    }
}