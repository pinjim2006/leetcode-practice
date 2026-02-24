


typedef struct {
    int queue[10000];
    int front;
    int rear;
} RecentCounter;


RecentCounter* recentCounterCreate() {
    RecentCounter* newRecentCounter = (RecentCounter*)malloc(sizeof(RecentCounter));
    newRecentCounter->front = 0;
    newRecentCounter->rear = 0;
    return newRecentCounter;
}

int recentCounterPing(RecentCounter* obj, int t) {
    obj->queue[obj->rear++] = t;
    while(obj->queue[obj->front] < obj->queue[obj->rear-1] - 3000){
        obj->front++;
    }
    return obj->rear - obj->front;
}

void recentCounterFree(RecentCounter* obj) {
    free(obj);
}

/**
 * Your RecentCounter struct will be instantiated and called as such:
 * RecentCounter* obj = recentCounterCreate();
 * int param_1 = recentCounterPing(obj, t);
 
 * recentCounterFree(obj);
*/