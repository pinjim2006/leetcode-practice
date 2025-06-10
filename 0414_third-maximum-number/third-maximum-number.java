class Solution {
    public int thirdMax(int[] nums) {
        int first_max = -2147483648, second_max = -2147483648, third_max = -2147483648;
        boolean first_check = false, second_check = false, third_check = false;
        for (int num : nums){
            if ((!first_check && num == -2147483648) || (num > first_max)){
                if (second_check) third_check = true;
                if (first_check) second_check = true;
                first_check = true;
                third_max = second_max;
                second_max = first_max;
                first_max = num;
            }else if ((!second_check && num == -2147483648) || (num < first_max && num > second_max)){
                if (num == first_max) continue;
                if (second_check) third_check = true;
                second_check = true;
                third_max = second_max;
                second_max = num;
            }else if ((!third_check && num == -2147483648) || (num < second_max && num > third_max)){
                if (num == second_max) continue;
                third_check = true;
                third_max = num;
            }
        }

        return first_check && second_check && third_check ? third_max : first_max;
    }
}