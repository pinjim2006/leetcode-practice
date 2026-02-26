int numSteps(char* s) {
    int len = strlen(s);
    bool hasOne = false;
    int ans = 0;
    for(int i = len - 1; i > 0; i--){
        if(s[i] == '1') hasOne = true;
        else if(hasOne) ans += 1;
    }
    if(hasOne){
        ans += len + 1;
    }else{
        ans = len - 1;
    }
    return ans;
}