int furthestDistanceFromOrigin(char* moves) {
    int left = 0;
    int right = 0;
    int uncertain = 0;
    for(int i = 0; moves[i] != '\0'; i++){
        switch(moves[i]){
            case 'L':
                left++;
                break;
            case 'R':
                right++;
                break;
            case '_':
                uncertain++;
                break;
        }
    }
    if(left > right) return left - right + uncertain;
    else return right - left + uncertain;
}