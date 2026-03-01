int timeRequiredToBuy(int* tickets, int ticketsSize, int k) {
    int time = 0;
    for(int i = 0; i <= k; i++) time += tickets[i] <= tickets[k] ? tickets[i] : tickets[k];
    for(int i = k + 1; i < ticketsSize; i++) time += tickets[i] <= tickets[k] - 1 ? tickets[i] : tickets[k] - 1;
    return time;
}