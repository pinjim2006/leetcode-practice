int cmp(const void* a, const void* b){
    return *(int*)b - *(int*)a;
}

int minDeletion(char* s, int k) {
    int count[26] = {};
    for(int i = 0; s[i] != '\0'; i++){
        count[s[i] - 'a']++;
    }
    qsort(count, 26, sizeof(int), cmp);
    int ans = 0;
    for(int i = k; i < 25 && count[i] != 0; i++){
        ans += count[i];
    }
    return ans;
}