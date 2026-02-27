class Solution {
    public String dayOfTheWeek(int day, int month, int year) {
        int[] months = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int countLeap = (year - 1971 + 2) / 4;
        int days = 0;
        String[] result = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        days += (year - 1971) * 365 + countLeap;
        for(int i = 1; i < month; i++){
            days += months[i];
            if(i == 2 && (year % 4 == 0 && year != 2100)) days++;
        }
        days += day;
        days += 4;
        return result[days % 7];
        
    }
}