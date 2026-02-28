int cmp(const void* a, const void* b){
    return *(int*)b - *(int*)a;
}

bool equalFrequency(char* word) {
    int counts[26] = {};
    int count = 0;
    for(int i = 0; word[i] != '\0'; i++){
        if(counts[word[i] - 'a'] == 0) count++;
        counts[word[i] - 'a']++;
    }
    qsort(counts, 26, sizeof(int), cmp);
    int diff = counts[0] - counts[count - 1];
    if(count == 1) return true;
    else if(counts[count - 1] == 1 && counts[0] == counts[count - 2]) return true;
    else if(diff > 1) return false;
    else if(diff == 0 && counts[0] == 1) return true;
    else if(counts[0] == counts[1] && counts[count - 2] == counts[count - 1]) return false;
    else if(diff == 1 && counts[0] == counts[1]) return false;
    else return true;
}