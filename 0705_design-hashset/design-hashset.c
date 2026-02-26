typedef struct {
    int contains[1000001];
} MyHashSet;


MyHashSet* myHashSetCreate() {
    MyHashSet* newHashSet = (MyHashSet*)malloc(sizeof(MyHashSet));
    memset(newHashSet->contains, 0, sizeof(newHashSet->contains));
    return newHashSet;
}

void myHashSetAdd(MyHashSet* obj, int key) {
    obj->contains[key] = 1;
}

void myHashSetRemove(MyHashSet* obj, int key) {
    obj->contains[key] = 0;
}

bool myHashSetContains(MyHashSet* obj, int key) {
    return obj->contains[key];
}

void myHashSetFree(MyHashSet* obj) {
    free(obj);
}

/**
 * Your MyHashSet struct will be instantiated and called as such:
 * MyHashSet* obj = myHashSetCreate();
 * myHashSetAdd(obj, key);
 
 * myHashSetRemove(obj, key);
 
 * bool param_3 = myHashSetContains(obj, key);
 
 * myHashSetFree(obj);
*/