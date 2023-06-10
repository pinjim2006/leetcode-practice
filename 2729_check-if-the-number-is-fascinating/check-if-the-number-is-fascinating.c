bool isFascinating(int n){
    int nums[3];
    int ans[10];
    memset(ans,0,sizeof(ans));
    nums[0]=n;
    nums[1]=n*2;
    nums[2]=n*3;
    bool a=1;
    for(int i=0;i<3;i++){
        while(nums[i]!=0){
            ans[nums[i]%10]++;
            nums[i]/=10;
        }
    }
    if(ans[0]!=0){
        a=0;
    }
    for(int i=1;i<=9;i++){
        if(ans[i]!=1){
            a=0;
        }
    }
    return a;
}