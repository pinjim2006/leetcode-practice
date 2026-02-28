int maximumPopulation(int** logs, int logsSize, int* logsColSize) {
    int count[101] = {};
    for(int i = 0; i < logsSize; i++){
        for(int j = logs[i][0]; j < logs[i][1]; j++){
            count[j - 1950]++;
        }
    }
    int index = 0;
    for(int i = 1; i < 101; i++){
        if(count[i] > count[index]) index = i;
    }
    return 1950 + index;
}