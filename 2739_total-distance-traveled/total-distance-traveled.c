int distanceTraveled(int mainTank, int additionalTank){
    int ans=0;
    while(mainTank>=5){
        mainTank-=5;
        ans+=50;
        if(additionalTank>=1){
            mainTank+=1;
            additionalTank-=1;
        }
    }
    while(mainTank>0){
        mainTank-=1;
        ans+=10;
    }
    return ans;
}