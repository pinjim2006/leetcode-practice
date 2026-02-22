int bitwiseComplement(int n) {
    if(n == 0) return 1;
    int logn = (int)log2(n) + 1;
    return n ^ ((int)pow(2, logn) - 1);
}