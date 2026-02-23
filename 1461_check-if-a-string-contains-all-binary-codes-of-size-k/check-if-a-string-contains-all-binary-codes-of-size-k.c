bool hasAllCodes(char* s, int k) {
    int len = strlen(s);
    if(len < (int)pow(2, k) + k - 1) return false;
    int mask = 0;
    for(int i = 0; i < k; i++){
        mask <<= 1;
        mask |= 1;
    }
    int cur = 0;
    for(int i = 0; i < k; i++){
        cur <<= 1;
        cur |= (s[i] == '0' || s[i] == '2') ? 0 : 1;
    }
    s[cur] = (s[cur] == '0' || s[cur] == '2') ? '2' : '3';
    for(int i = k; i < len; i++){
        cur <<= 1;
        cur |= (s[i] == '0' || s[i] == '2') ? 0 : 1;
        cur &= mask;
        s[cur] = (s[cur] == '0' || s[cur] == '2') ? '2' : '3';
    }
    for(int i = 0; i < (int)pow(2, k); i++){
        if(s[i] == '0' || s[i] == '1') return false;
    }
    return true;
}