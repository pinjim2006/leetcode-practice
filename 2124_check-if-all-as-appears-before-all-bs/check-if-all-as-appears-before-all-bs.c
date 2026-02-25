bool checkString(char* s) {
    bool bAppear = false;
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == 'b'){
            bAppear = true;
        }else if(s[i] == 'a' && bAppear){
            return false;
        }
    }
    return true;
}