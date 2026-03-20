int distanceTraveled(int mainTank, int additionalTank){
    int ans = 0;
    while(mainTank >= 5){
        int tmp = (mainTank / 5);
        ans += 50 * tmp;
        mainTank %= 5;
        if(additionalTank >= tmp){
            mainTank += tmp;
            additionalTank -= tmp;
        }else{
            mainTank += additionalTank;
            additionalTank = 0;
        }
    }
    ans += mainTank * 10;
    return ans;
}