/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* toggleLightBulbs(int* bulbs, int bulbsSize, int* returnSize) {
    int light[101] = {};
    int size = 0;
    for(int i = 0; i < bulbsSize; i++){
        light[bulbs[i]] ^= 1;
        if(light[bulbs[i]]) size++;
        else size--;
    }
    (*returnSize) = size;
    int* result = (int*)malloc(sizeof(int) * size);
    int count = 0;
    for(int i = 1; i < 101; i++){
        if(light[i]) result[count++] = i;
    }
    return result;
}