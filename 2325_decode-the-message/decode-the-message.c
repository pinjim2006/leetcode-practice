typedef struct{
    char key;
    char decode;
}map;

int cmp(const void* a, const void* b){
    return ((map*)a)->key - ((map*)b)->key;
}

char* decodeMessage(char* key, char* message) {
    map m[26];
    static char result[2001];
    bool check[26] = {};
    int len = 0;
    int count = 0;
    for(int i = 0; key[i] != '\0' && count < 26; i++){
        if(key[i] == ' ') continue;
        if(check[key[i] - 'a']) continue;
        m[count].key = key[i];
        m[count].decode = 'a' + count;
        count++;
        check[key[i] - 'a'] = true;
    }
    qsort(m, 26, sizeof(map), cmp);
    for(int i = 0; message[i] != '\0'; i++){
        if(message[i] == ' '){
            result[len++] = ' ';
        }else{
            result[len++] = m[message[i] - 'a'].decode;
        }
    }
    result[len] = '\0';
    return result;
}