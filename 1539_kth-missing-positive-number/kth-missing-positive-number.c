int findKthPositive(int* arr, int arrSize, int k) {
    int loc = 0;
    int missing = 0;
    int i = 1;
    while(missing < k){
        if(loc >= arrSize){
            missing++;
        }else if(i != arr[loc]){
            missing++;
        }else{
            loc++;
        }
        i++;
    }
    return i - 1;
}