/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

bool inArray(int key, int* nums, int numsSize){
    for(int i = 0; i < numsSize; i++){
        if(key == nums[i]) return true;
    }
    return false;
}

int* recoverOrder(int* order, int orderSize, int* friends, int friendsSize, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * friendsSize);
    *returnSize = friendsSize;
    int count = 0;
    for(int i = 0; i < orderSize && count < friendsSize; i++){
        if(inArray(order[i], friends, friendsSize)){
            result[count] = order[i];
            count++;
        }
    }
    return result;
}