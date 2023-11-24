int cmp(const void *a,const void *b){
    return *(int*)b-*(int*)a;
}

int maxCoins(int* piles, int pilesSize) {
    int result=0,count=1;
    qsort(piles,pilesSize,sizeof(int),cmp);
    for(int i=0;i<pilesSize/3;i++){
        result+=piles[count];
        count+=2;
    }
    return result;
}