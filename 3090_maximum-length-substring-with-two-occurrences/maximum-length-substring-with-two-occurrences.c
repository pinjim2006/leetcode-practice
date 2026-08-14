int maximumLengthSubstring(char* s) {
    int count[26] = {};
    int maxLen = 0;
    int curLen = 0;
    int left = 0;
    for(int i = 0; s[i] != '\0'; i++){
        if(count[s[i] - 'a'] == 2){
            while(s[left] != s[i]){
                count[s[left] - 'a']--;
                curLen--;
                left++;
            }
            left++;
        }else{
            curLen++;
            count[s[i] - 'a']++;
        }
        maxLen = curLen > maxLen ? curLen : maxLen;
    }
    return maxLen;
}