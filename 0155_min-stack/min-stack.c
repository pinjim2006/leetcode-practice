/**
 * Your MinStack struct will be instantiated and called as such:
 * MinStack* obj = minStackCreate();
 * minStackPush(obj, val);
 
 * minStackPop(obj);
 
 * int param_3 = minStackTop(obj);
 
 * int param_4 = minStackGetMin(obj);
 
 * minStackFree(obj);
*/

typedef struct {
    int* stack;
    int* minStack;
    int top;
    int minTop;
} MinStack;


MinStack* minStackCreate() {
    MinStack* obj = (MinStack*)malloc(sizeof(MinStack));
    obj->stack = (int*)malloc(sizeof(int) * 30000);
    obj->minStack = (int*)malloc(sizeof(int) * 30000);
    obj->top = 0;
    obj->minTop = 0;
    return obj;
}

void minStackPush(MinStack* obj, int val) {
    obj->stack[(obj->top)++] = val;
    if(obj->minTop == 0 || val <= obj->minStack[(obj->minTop - 1)]){
        obj->minStack[(obj->minTop)++] = val;
    }
}

void minStackPop(MinStack* obj) {
    if(obj->stack[(obj->top - 1)] == obj->minStack[(obj->minTop - 1)]){
        obj->top--;
        obj->minTop--;
    }else{
        obj->top--;
    }
}

int minStackTop(MinStack* obj) {
    return obj->stack[obj->top - 1];
}

int minStackGetMin(MinStack* obj) {
    return obj->minStack[(obj->minTop - 1)];
}

void minStackFree(MinStack* obj) {
    free(obj->stack);
    free(obj->minStack);
    free(obj);
}