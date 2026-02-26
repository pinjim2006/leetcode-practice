#define min(a,b) a<b?a:b

int countBinarySubstrings(char* s) {
    int ans = 0;
    int count0 = s[0] == '0', count1 = s[0] == '1';
    char last = s[0];
    for(int i = 1; s[i] != '\0'; i++){
        if(s[i] != last){
            last = s[i];
            ans += min(count0, count1);
            if(s[i] == '0') count0 = 1;
            else count1 = 1;
        }else{
            if(s[i] == '0') count0++;
            else count1++;
        }
    }
    ans += min(count0, count1);
    return ans;
}