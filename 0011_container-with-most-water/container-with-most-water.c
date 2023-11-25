int min(int a,int b){
    if(a>b){
        return b;
    }else{
        return a;
    }
}

int maxArea(int* height, int heightSize) {
    int left=0,right=heightSize-1,result=0;
    while(left<right){
        result=( (right-left)*min(height[right],height[left]) )>result?( (right-left)*min(height[right],height[left]) ):result;
        if(height[left]<height[right]){
            left++;
        }else{
            right--;
        }
    }
    return result;
}