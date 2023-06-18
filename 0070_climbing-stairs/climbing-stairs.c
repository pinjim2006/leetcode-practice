int climbStairs(int n){
    long long int fib[48];
	fib[0]=1;
	fib[1]=1;
	for(int i=2;i<48;i++){
		fib[i]=fib[i-1]+fib[i-2];
	}
    return fib[n];
}