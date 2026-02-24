int numRookCaptures(char** board, int boardSize, int* boardColSize) {
    int rookX = -1, rookY = -1;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(board[i][j] == 'R'){
                rookX = i;
                rookY = j;
                goto exit;
            }
        }
    }
    exit:
    int ans = 0;
    for(int i = rookX - 1; i >= 0; i--){
        if(board[i][rookY] == 'p'){
            ans++;
            break;
        }else if(board[i][rookY] == 'B'){
            break;
        }
    }
    for(int i = rookX + 1; i < 8; i++){
        if(board[i][rookY] == 'p'){
            ans++;
            break;
        }else if(board[i][rookY] == 'B'){
            break;
        }
    }
    for(int i = rookY - 1; i >= 0; i--){
        if(board[rookX][i] == 'p'){
            ans++;
            break;
        }else if(board[rookX][i] == 'B'){
            break;
        }
    }
    for(int i = rookY + 1; i < 8; i++){
        if(board[rookX][i] == 'p'){
            ans++;
            break;
        }else if(board[rookX][i] == 'B'){
            break;
        }
    }
    return ans;
}