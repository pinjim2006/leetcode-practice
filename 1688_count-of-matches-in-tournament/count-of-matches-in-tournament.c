int numberOfMatches(int n){
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else if(n%2)
        return n/2+numberOfMatches(n/2+1);
    else
        return n/2+numberOfMatches(n/2); 
}