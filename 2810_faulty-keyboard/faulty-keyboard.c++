class Solution {
public:
    string finalString(string s) {
        string result = "";
        for(int i = 0; s[i] != '\0'; i++){
            if(s[i] == 'i'){
                reverse(result.begin(), result.end());
            }else{
                result.push_back(s[i]);
            }
        }
        return result;
    }
};