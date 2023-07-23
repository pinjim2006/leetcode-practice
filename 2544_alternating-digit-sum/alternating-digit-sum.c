int alternateDigitSum(int n){
    int result=0,times=0;
    while(n>0){
        if(times%2==0){
            result+=n%10;
        }else{
            result-=n%10;
        }
        n/=10;
        times++;
    }
    if(times%2==1){
        return result;
    }else{
        return -result;
    }
}