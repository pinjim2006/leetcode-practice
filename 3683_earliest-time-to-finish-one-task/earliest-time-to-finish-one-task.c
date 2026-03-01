int earliestTime(int** tasks, int tasksSize, int* tasksColSize) {
    int earliest = 100000;
    for(int i = 0; i < tasksSize; i++){
        earliest = earliest < (tasks[i][0] + tasks[i][1]) ? earliest : (tasks[i][0] + tasks[i][1]);
    }
    return earliest;
}