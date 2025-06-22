class Solution {
    public String[] divideString(String s, int k, char fill) {
        for(int i = 0; i < s.length() % k; i++) s += fill;
        String[] result = new String[s.length() / k];
        for(int i = 0; i < s.length() / k; i++){
            result[i] = s.substring(k*i, k*(i+1));
        }
        return result;
    }
}