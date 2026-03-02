bool checkRecord(char* s) {
    int countA = 0;
    int countL = 0;
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == 'A') {
            countA++;
            countL = 0;
        }
        else if(s[i] == 'L') countL++;
        else countL = 0;
        if(countA >= 2 || countL >= 3) return false;
    }
    return true;
}