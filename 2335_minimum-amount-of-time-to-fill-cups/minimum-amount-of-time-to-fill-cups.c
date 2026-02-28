int cmp(const void* a, const void* b){
    return *(int*)b - *(int*)a;
}

int fillCups(int* amount, int amountSize) {
    qsort(amount, 3, sizeof(int), cmp);
    return amount[0] + (amount[0] >= (amount[1] + amount[2]) ? 0 : (amount[1] + amount[2] - amount[0]) / 2 + (amount[1] + amount[2] - amount[0]) % 2);
}