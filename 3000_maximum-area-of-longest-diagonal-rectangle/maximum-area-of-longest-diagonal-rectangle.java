class Solution {
    public int areaOfMaxDiagonal(int[][] dimensions) {
        int maxlength = 0;
        int result = 0;
        for(int i = 0; i < dimensions.length; i++){
            if (maxlength < (dimensions[i][0] * dimensions[i][0] + dimensions[i][1] * dimensions[i][1])) {
                maxlength = (dimensions[i][0] * dimensions[i][0] + dimensions[i][1] * dimensions[i][1]);
                result = dimensions[i][0]*dimensions[i][1];
            }else if (maxlength == (dimensions[i][0] * dimensions[i][0] + dimensions[i][1] * dimensions[i][1])){
                result = result > dimensions[i][0]*dimensions[i][1] ? result : dimensions[i][0]*dimensions[i][1];
            }
        }
        return result;
    }
}