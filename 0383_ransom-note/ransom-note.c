bool canConstruct(char* ransomNote, char* magazine) {
    int count[26] = {0};
    int mlen = strlen(magazine);
    for(int i = 0; i < mlen; i++){
        count[magazine[i] - 'a']++;
    }

    int rlen = strlen(ransomNote);
    for(int i = 0; i < rlen; i++){
        if(count[ransomNote[i] - 'a'] <= 0) return false;
        else count[ransomNote[i] - 'a']--;
    }
    
    return true;
}