int totalMoney(int n) {
    int ans=0;
    for(int i=0;i<n/7;i++)
        ans+=28+7*i;
    for(int i=1;i<=n%7;i++)
        ans+=i+n/7;
    return ans;
}