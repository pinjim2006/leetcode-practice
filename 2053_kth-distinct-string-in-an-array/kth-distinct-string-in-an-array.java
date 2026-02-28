class Solution {
    public String kthDistinct(String[] arr, int k) {
        HashMap<String, Integer> map = new HashMap<String, Integer>();
        for(String s : arr){
            if(map.containsKey(s)){
                map.replace(s, 1);
            }else{
                map.put(s, 0);
            }
        }
        int count = 0;
        for(String s : arr){
            if(map.get(s) == 0){
                count++;
                if(count == k) return s;
            }
        }
        return "";
    }
}