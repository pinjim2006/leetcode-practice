int largestAltitude(int* gain, int gainSize){
    int max=0,tmp=0;
    for(int i=0;i<gainSize;i++){
        tmp+=gain[i];
        max=tmp>max?tmp:max;
    }
    return max;
}