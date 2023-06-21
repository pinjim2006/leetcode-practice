int tribonacci(int n){
    if(n==0){
        return 0;
    }
    if(n<3){
        return 1;
    }

    int n0=0,n1=1,n2=1;
    for(int i=0;i<=n-3;i++){
        int tmp=n0+n1+n2;
        n0=n1;
        n1=n2;
        n2=tmp;
    }
    return n2;
}
