typedef struct {
    int big;
    int medium;
    int small;
} ParkingSystem;


ParkingSystem* parkingSystemCreate(int big, int medium, int small) {
    ParkingSystem* newPark = (ParkingSystem*)malloc(sizeof(ParkingSystem));
    newPark->big = big;
    newPark->medium = medium;
    newPark->small = small;
    return newPark;
}

bool parkingSystemAddCar(ParkingSystem* obj, int carType) {
    switch(carType){
        case 1:
            if(obj->big > 0){
                obj->big--;
                return true;
            }else{
                return false;
            }
            break;
        case 2:
            if(obj->medium > 0){
                obj->medium--;
                return true;
            }else{
                return false;
            }
            break;
        case 3:
            if(obj->small > 0){
                obj->small--;
                return true;
            }else{
                return false;
            }
            break;
    }
    return false;
}

void parkingSystemFree(ParkingSystem* obj) {
    free(obj);
}

/**
 * Your ParkingSystem struct will be instantiated and called as such:
 * ParkingSystem* obj = parkingSystemCreate(big, medium, small);
 * bool param_1 = parkingSystemAddCar(obj, carType);
 
 * parkingSystemFree(obj);
*/