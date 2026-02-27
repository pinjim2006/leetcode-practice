double calculateTax(int** brackets, int bracketsSize, int* bracketsColSize, int income) {
    double result = 0;
    int paid = 0;
    int rate = 0;
    while(paid < income){
        if(income > brackets[rate][0]){
            int pay = brackets[rate][0] - paid;
            paid += pay;
            result += pay * brackets[rate][1] * 0.01;
            rate++;
        }else{
            int pay = income - paid;
            paid += pay;
            result += pay * brackets[rate][1] * 0.01;
            rate++;
        }
    }
    return result;
}