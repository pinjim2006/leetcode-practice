class Solution {
public:
    string interpret(string s) {
        int len = s.length();
        string result;
        for(int i = 0; i < len; i++){
            if(s[i] == 'G'){
                result += "G";
            }else{
                i++;
                if(s[i] == ')'){
                    result += "o";
                }else{
                    i += 2;
                    result += "al";
                }
            }
        }
        return result;
    }
};