int minTimeToType(char* word) {
    int ans = 1 + (abs(word[0] -'a') < (26 - abs(word[0] -'a')) ? abs(word[0] -'a') : (26 - abs(word[0] -'a')));
    for(int i = 1; word[i] != '\0'; i++){
        ans++;
        ans += abs(word[i] - word[i - 1]) < (26 - abs(word[i] - word[i - 1])) ? abs(word[i] - word[i - 1]) : (26 - abs(word[i] - word[i - 1]));
    }
    return ans;
}