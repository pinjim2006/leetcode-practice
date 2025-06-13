class Solution {
    public int[] constructRectangle(int area) {
        int i = (int)Math.sqrt(area);
        int[] result = new int[2];
        for (i = i; i >= 1; i--){
            if(area % i == 0){
                result[0] = area/i;
                result[1] = i;
                break;
            }
        }
        return result;
    }
}