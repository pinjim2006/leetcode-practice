int dayOfYear(char* date) {
    int months[13] = {29, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year = (date[0] - '0') * 1000 + (date[1] - '0') * 100 + (date[2] - '0') * 10 + (date[3] - '0');
    int month = (date[5] - '0') * 10 + (date[6] - '0');
    int day = (date[8] - '0') * 10 + (date[9] - '0');
    int isNom = (year % 4 != 0) || (year % 100 == 0 && year % 400 != 0);
    int ans = 0;
    if(isNom){
        for(int i = 1; i < month; i++){
            ans += months[i];
        }
        ans += day;
    }else{
        for(int i = 1; i < month; i++){
            if(i == 2) ans += months[0];
            else ans += months[i];
        }
        ans += day;
    }
    return ans;
}