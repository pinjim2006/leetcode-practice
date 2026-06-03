int earliestFinishTime(int* landStartTime, int landStartTimeSize, int* landDuration, int landDurationSize, int* waterStartTime, int waterStartTimeSize, int* waterDuration, int waterDurationSize) {
    int minLandEnd = 1000000, minWaterEnd = 1000000;
    int minTime = 1000000;
    for(int i = 0; i < landStartTimeSize; i++){
        minLandEnd = (landStartTime[i] + landDuration[i]) < minLandEnd ? (landStartTime[i] + landDuration[i]) : minLandEnd;
    }
    for(int i = 0; i < waterStartTimeSize; i++){
        minWaterEnd = (waterStartTime[i] + waterDuration[i]) < minWaterEnd ? (waterStartTime[i] + waterDuration[i]) : minWaterEnd;
    }
    for(int i = 0; i < waterStartTimeSize; i++){
        int tmp = (minLandEnd + waterDuration[i]) > (waterStartTime[i] + waterDuration[i]) ? (minLandEnd + waterDuration[i]) : (waterStartTime[i] + waterDuration[i]);
        minTime = tmp < minTime ? tmp : minTime;
    }
    for(int i = 0; i < landStartTimeSize; i++){
        int tmp = (minWaterEnd + landDuration[i]) > (landStartTime[i] + landDuration[i]) ? (minWaterEnd + landDuration[i]) : (landStartTime[i] + landDuration[i]);
        minTime = tmp < minTime ? tmp : minTime;
    }
    return minTime;
}