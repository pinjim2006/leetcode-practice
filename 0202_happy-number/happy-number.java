class Solution {
    public boolean isHappy(int n) {
        Set<Integer> set = new HashSet<>();
        while(n != 1){
            if(set.contains(n)) return false;
            set.add(n);
            int tmpNum = 0;
            while(n > 0){
                tmpNum += (n%10) * (n%10);
                n /= 10;
            }
            n = tmpNum;
        }
        return true;
    }
}