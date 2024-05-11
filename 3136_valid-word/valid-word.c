bool isValid(char* s) {
    bool v=0,c=0;
    if(strlen(s)<3){
        return 0;
    }
    for(int i=0;i<strlen(s);i++){
        if((s[i]>='0'&&s[i]<='9')||(s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                v=1;
            }else if(s[i]>'9'){
                c=1;
            }
        }else{
            return 0;
        }
    }
    if(c&&v) return 1;
    else return 0;
}