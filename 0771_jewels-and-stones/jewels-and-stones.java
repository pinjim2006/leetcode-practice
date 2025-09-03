class Solution {
    public int numJewelsInStones(String jewels, String stones) {
        Set<Character> set = new HashSet<>();
        int ans = 0;
        for(char c : jewels.toCharArray()){
            set.add(c);
        }
        for(char c : stones.toCharArray()){
            ans += set.contains(c) ? 1 : 0;
        }
        return ans;
    }
}