bool isPowerOfThree(int n){
    if(n<=0){
        return 0;
    }else{
        double ans=log10(n)/log10(3);
        int tmp=(int)floor(ans);
        return (double)tmp==ans;
        //return pow(3,tmp)==n;
    }
}