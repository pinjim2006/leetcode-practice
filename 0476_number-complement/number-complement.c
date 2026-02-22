int findComplement(int num) {
    int mask = 0, tmp = num;
    while(tmp){
        mask <<= 1;
        mask |= 1;
        tmp >>= 1;
    }
    return num ^ mask;
}