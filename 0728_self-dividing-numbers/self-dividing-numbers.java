class Solution {
    public List<Integer> selfDividingNumbers(int left, int right) {
        List<Integer> result = new ArrayList<>();
        outer: for(int i = left; i <= right; i++){
            int tmp = i;
            while(tmp > 0){
                if(tmp % 10 == 0){
                    continue outer;
                }else if(i % (tmp % 10) != 0){
                    continue outer;
                }
                tmp /= 10;
            }
            result.add(i);
        }
        return result;
    }
}