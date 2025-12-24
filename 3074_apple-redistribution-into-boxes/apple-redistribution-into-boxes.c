int cmp (const void * a, const void * b){
   return ( *(int*)b - *(int*)a );
}

int minimumBoxes(int* apple, int appleSize, int* capacity, int capacitySize) {
    qsort(capacity, capacitySize, sizeof(int), cmp);
    int total = 0;
    for(int i = 0; i < appleSize; i++) total += apple[i];
    int ans = 0;
    while(total > 0){
        total -= capacity[ans];
        ans++;
    }
    return ans;
}