typedef struct {
    int s1[10];
    int s2[10];
    int s1Top;
    int s2Top;
} MyQueue;

MyQueue* myQueueCreate() {
    MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
    obj->s1Top = -1;
    obj->s2Top = -1;
    return obj;
}

void myQueuePush(MyQueue* obj, int x) {
    obj->s1Top++;
    obj->s1[obj->s1Top] = x;
}

int myQueuePop(MyQueue* obj) {
    if(obj->s2Top == -1){
        while(obj->s1Top != -1){
            obj->s2Top++;
            obj->s2[obj->s2Top] = obj->s1[obj->s1Top];
            obj->s1Top--;
        }
    }
    int result = obj->s2[obj->s2Top];
    obj->s2Top--;
    return result;
}

int myQueuePeek(MyQueue* obj) {
    if(obj->s2Top == -1){
        while(obj->s1Top != -1){
            obj->s2Top++;
            obj->s2[obj->s2Top] = obj->s1[obj->s1Top];
            obj->s1Top--;
        }
    }
    return obj->s2[obj->s2Top];
}

bool myQueueEmpty(MyQueue* obj) {
    return (obj->s1Top == -1) && (obj->s2Top == -1);
}

void myQueueFree(MyQueue* obj) {
    free(obj);
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);
 
 * int param_2 = myQueuePop(obj);
 
 * int param_3 = myQueuePeek(obj);
 
 * bool param_4 = myQueueEmpty(obj);
 
 * myQueueFree(obj);
*/