int cmp(const void* a, const void* b){
    return *(int*)a - *(int*)b;
}

char* bestHand(int* ranks, int ranksSize, char* suits, int suitsSize) {
    if(suits[0] == suits[1] && suits[0] == suits[2] && suits[0] == suits[3] && suits[0] == suits[4]) return "Flush";
    qsort(ranks, 5, sizeof(int), cmp);
    if((ranks[0] == ranks[1] && ranks[1] == ranks[2]) || (ranks[1] == ranks[2] && ranks[2] == ranks[3]) || (ranks[2] == ranks[3] && ranks[3] == ranks[4])) return "Three of a Kind";
    if(ranks[0] == ranks[1] || ranks[1] == ranks[2] || ranks[2] == ranks[3] || ranks[3] == ranks[4]) return "Pair";
    return "High Card";
}