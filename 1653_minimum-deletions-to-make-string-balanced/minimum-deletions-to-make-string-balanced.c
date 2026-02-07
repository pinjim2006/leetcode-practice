int minimumDeletions(char* s) {
    int len = strlen(s);
    int rightA = 0;
    int leftB = 0;
    for(int i = 0; i < len; i++){
        if(s[i] == 'a') rightA++;
    }
    int ans = rightA;
    for(int i = 0; i < len; i++){
        if(s[i] == 'a'){
            rightA--;
        }else{
            leftB++;
        }
        ans = ans < (rightA + leftB) ? ans : (rightA + leftB);
    }
    return ans;
}