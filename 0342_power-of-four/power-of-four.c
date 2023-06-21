bool isPowerOfFour(int n){
    if(n<=0){
        return 0;
    }else{
        double ans=log10(n)/log10(4);
        int tmp=(int)floor(ans);
        return (double)tmp==ans;
    }
}