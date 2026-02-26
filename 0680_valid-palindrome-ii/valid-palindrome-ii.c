bool validPalindrome(char* s) {
    bool deleted = false;
    bool deleteLeft = true, deleteRight = true, noDelete = true;
    int left = -1, right = -1;
    int len = strlen(s);
    for(int i = 0; i < len / 2; i++){
        if(s[i] != s[len - i - 1]){
            noDelete = false;
            left = i;
            right = len - i - 1;
            break;
        }
    }
    if(noDelete) return true;
    //delete left
    for(int i = 0; i < len / 2; i++){
        if(s[i < left ? i : i + 1] != s[len - i - 1]){
            deleteLeft = false;
            break;
        }
    }
    if(deleteLeft) return true;
    
    //delete right
    for(int i = 0; i < len / 2; i++){
        if(s[i] != s[(len - i - 1) > right ? (len - i - 1) : (len - i - 2)]){
            deleteRight = false;
            break;
        }
    }
    return deleteRight;
}