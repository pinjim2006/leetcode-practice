bool canMakeArithmeticProgression(int* arr, int arrSize){
    for(int i=0;i<arrSize;i++){
			for(int j=0;j<arrSize-i-1;j++){
				if(arr[j]>arr[j+1]){
					int tmp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=tmp;
				}
			}
		}
    int d=arr[1]-arr[0];
    bool ans=1;
    for(int i=1;i<arrSize-1;i++){
        if(arr[i+1]-arr[i]!=d){
            ans=0;
        }
    }
    return ans;
}