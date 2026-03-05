bool canAliceWin(int n) {
    int i = 10;
    while(true){
        if(n < i) break;
        else{
            n -= i;
            i--;
        }
    }
    return i % 2;
}