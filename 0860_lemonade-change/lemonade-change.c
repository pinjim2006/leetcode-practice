bool lemonadeChange(int* bills, int billsSize) {
    int cash[2] = {};
    for(int i = 0; i < billsSize; i++){
        switch(bills[i]){
            case 5:
                cash[0]++;
                break;
            case 10:
                cash[0]--;
                cash[1]++;
                break;
            case 20:
                if(cash[1] == 0){
                    cash[0] -= 3;
                }else{
                    cash[0]--;
                    cash[1]--;
                }
                break;
        }
        if(cash[0] < 0 || cash[1] < 0) return false;
    }
    return true;
}