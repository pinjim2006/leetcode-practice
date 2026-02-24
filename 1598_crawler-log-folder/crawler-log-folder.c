int minOperations(char** logs, int logsSize) {
    int cur = 0;
    for(int i = 0; i < logsSize; i++){
        if(logs[i][0] == '.'){
            if(logs[i][1] == '.'){
                cur -= cur != 0;
            }
        }else{
            cur++;
        }
    }
    return cur;
}