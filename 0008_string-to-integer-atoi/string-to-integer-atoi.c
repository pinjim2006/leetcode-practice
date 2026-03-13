int myAtoi(char* s) {
    long ans = 0;
    int i = 0;
    while(s[i] == ' ') i++;

    int sign = 1;
    if(s[i] == '+' || s[i] == '-'){
        sign = s[i] == '-' ? -1 : 1;
        i++;
    }

    while(s[i] != '\0' && isdigit(s[i])){
        ans *= 10;
        ans += s[i] - '0';

        if(sign == 1 && ans >= INT_MAX) return INT_MAX;
        else if(sign == -1 && -ans <= INT_MIN) return INT_MIN;

        i++;
    }
    return (int)(ans * sign);
}