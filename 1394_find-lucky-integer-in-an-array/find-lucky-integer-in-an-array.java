class Solution {
    public int findLucky(int[] arr) {
        int[] count = new int[501];
        Arrays.fill(count, 0);
        for(int i = 0; i < arr.length; i++){
            count[arr[i]]++;
        }
        for(int i = 500; i > 0; i--){
            if(i == count[i]){
                return i;
            }
        }
        return -1;
    }
}