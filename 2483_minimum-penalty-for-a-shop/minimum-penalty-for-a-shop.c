int bestClosingTime(char* customers) {
    int countN = 0, countY = 0;
    int len = strlen(customers);
    for(int i = 0; i < len; i++){
        if(customers[i] == 'Y') countY++;
        else countN++;
    }
    int minPenalty = countY, curPenalty = countY, time = 0;
    for(int i = 0; i < len; i++){
        if(customers[i] == 'Y'){
            curPenalty--;
            if(curPenalty < minPenalty){
                minPenalty = curPenalty;
                time = i+1;
            }
        }else{
            curPenalty++;
        }
    }
    return time;
}