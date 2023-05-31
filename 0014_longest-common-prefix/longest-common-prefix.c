char * longestCommonPrefix(char ** strs, int strsSize){
    char* result=strs[0];
    int len=strlen(result);

    for(int i=1;i<strsSize;i++){
        int j=0;
        while(j<len&&result[j]==strs[i][j]){
            j++;
        }
        len=j;
    }
    result[len]='\0';
    return result;
}