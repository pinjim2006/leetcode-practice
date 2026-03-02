bool isspec(char c){
    return c == '!' || c == '@' || c == '#' || c == '$' || c == '%' || c == '^' || c == '&' || c == '*' || c == '(' || c == ')' || c == '-' || c == '+';
}

bool strongPasswordCheckerII(char* password) {
    int check = 0;
    int i;
    for(i = 0; password[i] != '\0'; i++){
        if(islower(password[i])) check |= 1;
        else if(isalpha(password[i])) check |= 2;
        else if(isdigit(password[i])) check |= 4;
        else if(isspec(password[i])) check |= 8;
        if(i > 0){
            if(password[i] == password[i - 1]) return false;
        }
    }
    if(i < 8) return false;
    return check == 15;
}