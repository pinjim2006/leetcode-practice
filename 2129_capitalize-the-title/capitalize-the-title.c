char* capitalizeTitle(char* title) {
    int left = 0;
    int right = 0;
    for(int i = 0; title[i] != '\0'; i++){
        if(title[i] == ' '){
            if(right - left > 2){
                title[left] -= 32;
            }
            left = i + 1;
        }else{
            title[i] = tolower(title[i]);
        }
        right++;
    }
    if(right - left > 2){
        title[left] -= 32;
    }
    return title;
}