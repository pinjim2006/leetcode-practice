int findPoisonedDuration(int* timeSeries, int timeSeriesSize, int duration) {
    int ans = duration;
    for(int i = 0; i < timeSeriesSize - 1; i++){
        if(timeSeries[i] + duration - 1 < timeSeries[i+1]){
            ans += duration;
        }else{
            ans += timeSeries[i+1] - timeSeries[i];
        }
    }
    return ans;
}