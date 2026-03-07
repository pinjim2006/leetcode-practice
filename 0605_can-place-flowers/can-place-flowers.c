bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    for(int i = 0; i < flowerbedSize; i++){
        if(flowerbed[i] == 1){
            i++;
        }else if(i == 0){
            if(flowerbed[(i + 1) % flowerbedSize] == 0){
                n--;
                flowerbed[i] = 1;
            }
        }else if(i == flowerbedSize - 1){
            if(flowerbed[i - 1] == 0){
                n--;
                flowerbed[i] = 1;
            }
        }else{
            if(flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0){
                n--;
                flowerbed[i] = 1;
            }
        }
        if(n <= 0) return true;
    }
    return false;
}