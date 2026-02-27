bool threeConsecutiveOdds(int* arr, int arrSize) {
    bool result = false;
    int count = 0;
    for(int i = 0; i < arrSize; i++){
        if(arr[i] % 2){
            count++;
            if(count >= 3){
                result = true;
                break;
            }
        }else{
            count = 0;
        }
    }
    return result;
}