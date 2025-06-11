class Solution {
    public String convertToBase7(int num) {
        if (num == 0) return "0";
        StringBuilder result = new StringBuilder();
        boolean negative = (num < 0);
        num = Math.abs(num);

        while (num > 0){
            result.insert(0, num % 7);
            num /= 7;
        }

        if (negative) result.insert(0, "-");

        return result.toString();
    }
}