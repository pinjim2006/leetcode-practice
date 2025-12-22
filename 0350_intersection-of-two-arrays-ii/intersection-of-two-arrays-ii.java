class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        HashMap<Integer, Integer> map = new HashMap<>();
        ArrayList<Integer> list = new ArrayList<>();

        for(int n : nums1){
            if(map.containsKey(n)){
                map.replace(n, map.get(n) + 1);
            }else{
                map.put(n, 1);
            }
        }
        for(int n : nums2){
            if(map.containsKey(n)){
                if(map.get(n) > 0){
                    list.add(n);
                    map.replace(n, map.get(n) - 1);
                }
            }
        }
        int[] result = new int[list.size()];
        for (int i = 0; i < list.size(); i++) {
            result[i] = list.get(i);
        }
        return result;
    }
}