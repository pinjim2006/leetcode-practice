int numberOfBeams(char** bank, int bankSize) {
    int count[bankSize],ans=0;
    for(int i=0;i<bankSize;i++){
        count[i]=0;
        for(int j=0;j<strlen(bank[i]);j++){
            count[i]+=bank[i][j]-'0';
        }
    }
    int left=0;
    for(int i=1;i<bankSize;i++){
        if(count[i]!=0){
            ans+= (count[left]*count[i]);
            left=i;
        }
    }
    return ans;
}