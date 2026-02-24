class Solution {
    public String destCity(List<List<String>> paths) {
        HashMap<String, String> m = new HashMap<String, String>();
        for(List<String> path : paths){
            m.put(path.get(0), path.get(1));
        }
        String cur = paths.get(0).get(0);
        while(m.containsKey(cur)){
            cur = m.get(cur);
        }
        return cur;
    }
}