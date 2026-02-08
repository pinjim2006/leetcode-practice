int finalPositionOfSnake(int n, char** commands, int commandsSize) {
    int ans = 0;
    for(int i = 0; i < commandsSize; i++){
        int len = strlen(commands[i]);
        if(len == 2){
            ans -= n;
        }else if(len == 5){
            ans += 1;
        }else if(strcmp("DOWN", commands[i]) == 0){
            ans += n;
        }else{
            ans -= 1;
        }
    }
    return ans;
}