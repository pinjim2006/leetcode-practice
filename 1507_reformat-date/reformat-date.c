char* reformatDate(char* date) {
    static char result[11];
    char month[4];
    char months[13][4] = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    result[4] = '-';
    result[7] = '-';
    if(strlen(date) == 13){
        for(int i = 0; i < 4; i++) result[i] = date[9 + i];
        result[8] = date[0];
        result[9] = date[1];
        month[0] = date[5];
        month[1] = date[6];
        month[2] = date[7];
        month[3] = '\0';
    }else{
        for(int i = 0; i < 4; i++) result[i] = date[8 + i];
        result[8] = '0';
        result[9] = date[0];
        month[0] = date[4];
        month[1] = date[5];
        month[2] = date[6];
        month[3] = '\0';
    }
    for(int i = 1; i <= 12; i++){
        if(strcmp(month, months[i]) == 0){
            if(i < 10){
                result[5] = '0';
            }else{
                result[5] = '1';
            }
            result[6] = i % 10 + '0';
        }
    }
    result[10] = '\0';
    return result;
}