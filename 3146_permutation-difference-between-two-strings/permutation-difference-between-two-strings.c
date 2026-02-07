int loc(char* s, char t, int len){
    for(int i = 0; i < len; i++){
        if(s[i] == t) return i;
    }
    return -1;
}

int findPermutationDifference(char* s, char* t) {
    int len = strlen(s);
    int ans = 0;
    for(int i = 0; i < len; i++){
        ans += abs(i - loc(s, t[i], len));
    }
    return ans;
}