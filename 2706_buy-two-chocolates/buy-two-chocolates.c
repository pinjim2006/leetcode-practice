int buyChoco(int* prices, int pricesSize, int money){
    for(int i=0;i<pricesSize;i++){
        for(int j=0;j<pricesSize-i-1;j++){
            if(prices[j]>prices[j+1]){
                int tmp=prices[j];
                prices[j]=prices[j+1];
                prices[j+1]=tmp;
            }
        }
    }
    if(prices[0]+prices[1]>money){
        return money;
    }else{
        return money-(prices[0]+prices[1]);
    }
}