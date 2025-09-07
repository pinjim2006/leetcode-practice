class Solution {
    public int[] sumZero(int n) {
        List<Integer> result = new ArrayList<>();
        for(int i = 1; i <= n/2; i++){
            result.add(i);
            result.add(-i);
        }
        if(n % 2 == 1){
            result.add(0);
        }
        return result.stream().mapToInt(i -> i).toArray();
    }
}