class Solution {
    public String convertToTitle(int columnNumber) {
        StringBuilder result = new StringBuilder();
        while (columnNumber > 0){
            if (columnNumber % 26 == 0){
                result.insert(0, 'Z');
                columnNumber /= 26;
                columnNumber--;
            }else{
                result.insert(0, (char)((columnNumber % 26) + 64));
                columnNumber /= 26;
            }
        }
        return result.toString();
    }
}