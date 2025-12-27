#define max(a,b) a>b?a:b

int maxFreqSum(char* s) {
    int count[26];
    int maxA = 0, maxB = 0;
    memset(count, 0, sizeof(count));
    int len = strlen(s);
    for(int i = 0; i < len; i++){
        count[s[i] - 'a']++;
    }
    for(int i = 0; i < 26; i++){
        if(i == 0 || i == 4 || i == 8 || i == 14 || i == 20) maxA = max(maxA, count[i]);
        else maxB = max(maxB, count[i]);
    }
    return maxA + maxB;
}