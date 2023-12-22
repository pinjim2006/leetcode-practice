int max(a, b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int maxScore(char* s) {
    int count[2][strlen(s)],c0=0,c1=0;
    int ans = 0;
    if (s[0] == '0') {
        count[0][0] = 1;
        count[1][0] = 0;
        c0=1;
    } else {
        count[0][0] = 0;
        count[1][0] = 1;
        c1=1;
    }
    for (int i = 1; i < strlen(s); i++) {
        if (s[i] == '0') {
            c0++;
        } else {
            c1++;
        }
        count[0][i] = c0;
        count[1][i] = c1;
    }
    for (int i = 0; i < strlen(s)-1; i++) {
        ans=max((count[0][i] + (count[1][strlen(s)-1] - count[1][i])), ans);
    }
    return ans;
}