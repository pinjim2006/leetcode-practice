int cmp(const void* a, const void* b){
    return *(int*)a - *(int*)b;
}

int heightChecker(int* heights, int heightsSize) {
    int check[heightsSize];
    int ans = 0;
    for(int i = 0; i < heightsSize; i++){
        check[i] = heights[i];
    }
    qsort(check, heightsSize, sizeof(int), cmp);
    for(int i = 0; i < heightsSize; i++){
        if(check[i] != heights[i]) ans++;
    }
    return ans;
}