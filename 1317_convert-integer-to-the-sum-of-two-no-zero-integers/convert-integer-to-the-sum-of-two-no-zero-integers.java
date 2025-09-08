class Solution {
    public int[] getNoZeroIntegers(int n) {
        int[] result = new int[2];
        for(int i = 1; i <= n/2; i++){
            result[0] = i;
            result[1] = n - i;
            if(checkZero(result[0]) && checkZero(result[1])){
                break;
            }
        }
        return result;
    }
    private boolean checkZero(int n){
        while(n > 0){
            if(n % 10 == 0){
                return false;
            }
            n /= 10;
        }
        return true;
    }
}