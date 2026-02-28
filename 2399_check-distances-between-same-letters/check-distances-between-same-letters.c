bool checkDistances(char* s, int* distance, int distanceSize) {
    int check[26][2];
    for(int i = 0; i < 26; i++){
        check[i][0] = -1;
        check[i][1] = -1;
    }
    for(int i = 0; s[i] != '\0'; i++){
        if(check[s[i] - 'a'][0] == -1)check[s[i] - 'a'][0] = i;
        else check[s[i] - 'a'][1] = i;
    }
    for(int i = 0; i < 26; i++){
        if(check[i][0] == -1) continue;
        if((check[i][1] - check[i][0] - 1) != distance[i]) return false;
    }
    return true;
}