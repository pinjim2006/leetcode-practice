bool checkOnesSegment(char* s) {
    bool hasZero = false;
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == '0'){
            hasZero = true;
        }else{
            if(hasZero) return false;
        }
    }
    return true;
}