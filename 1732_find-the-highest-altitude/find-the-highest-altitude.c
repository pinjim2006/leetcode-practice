int largestAltitude(int* gain, int gainSize){
    int max = 0, cur = 0;
    for(int i = 0; i < gainSize; i++){
        cur += gain[i];
        max = cur > max ? cur : max;
    }
    return max;
}