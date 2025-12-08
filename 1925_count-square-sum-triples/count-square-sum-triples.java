class Solution {
    public int countTriples(int n) {
        int result = 0;
        HashMap<Integer, Integer> map = new HashMap<>();
        for(int i = 1; i <= n; i++){
            map.put(i, i*i);
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                result += map.containsValue(map.get(i) + map.get(j)) ? 1 : 0;
            }
        }
        return result;
    }
}