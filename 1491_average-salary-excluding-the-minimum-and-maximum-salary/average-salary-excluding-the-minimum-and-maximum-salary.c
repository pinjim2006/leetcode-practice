double average(int* salary, int salarySize){
    int max=0,min=10000000;
    double sum=0;
    for(int i=0;i<salarySize;i++){
        sum+=salary[i];
        max=salary[i]>max?salary[i]:max;
        min=salary[i]<min?salary[i]:min;
    }
    sum-=max+min;
    return sum/(salarySize-2);
}