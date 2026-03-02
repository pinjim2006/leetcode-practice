int cmp(const void* a, const void* b){
    return *(int*)a - *(int*)b;
}

int splitNum(int num) {
    int nums[10];
    int size = 0;
    while(num){
        nums[size++] = num % 10;
        num /= 10;
    }
    int a = 0, b = 0;
    qsort(nums, size, sizeof(int), cmp);
    for(int i = 0; i < size; i++){
        if(i % 2){
            a *= 10;
            a += nums[i];
        }else{
            b *= 10;
            b += nums[i];
        }
    }
    return a + b;
}