typedef struct {
    int* map;
} MyHashMap;


MyHashMap* myHashMapCreate() {
    MyHashMap* new = (MyHashMap*)malloc(sizeof(MyHashMap));
    new->map = (int*)malloc(sizeof(int) * 1000001);
    for(int i = 0; i < 1000001; i++){
        new->map[i] = -1;
    }
    return new;
}

void myHashMapPut(MyHashMap* obj, int key, int value) {
    obj->map[key] = value;
}

int myHashMapGet(MyHashMap* obj, int key) {
    return obj->map[key];
}

void myHashMapRemove(MyHashMap* obj, int key) {
    obj->map[key] = -1;
}

void myHashMapFree(MyHashMap* obj) {
    free(obj->map);
    free(obj);
}

/**
 * Your MyHashMap struct will be instantiated and called as such:
 * MyHashMap* obj = myHashMapCreate();
 * myHashMapPut(obj, key, value);
 
 * int param_2 = myHashMapGet(obj, key);
 
 * myHashMapRemove(obj, key);
 
 * myHashMapFree(obj);
*/