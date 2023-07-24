int ttm(char* t){
    return (t[0]-'0')*10*60+(t[1]-'0')*60+(t[3]-'0')*10+(t[4]-'0');
}

bool haveConflict(char ** event1, int event1Size, char ** event2, int event2Size){
    return (ttm(event1[0])<=ttm(event2[1])&&ttm(event1[1])>=ttm(event2[0]));
}