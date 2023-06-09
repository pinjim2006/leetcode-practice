char nextGreatestLetter(char* letters, int lettersSize, char target){
    int left=0;
    int right=lettersSize-1;
    if(target>=letters[lettersSize-1]){
        return letters[0];
    }else{
        while(left<=right){
            int mid=(left+right)/2;
            if(letters[mid]==target){
                int a=mid;
                while(letters[a]==target){
                    a++;
                }
                return letters[a];
            }else if(letters[mid]<target){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return letters[left];
    }

}