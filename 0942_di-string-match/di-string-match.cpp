class Solution {
public:
    vector<int> diStringMatch(string s) {
        int len = s.length();
        vector<int> result(len+1);
        for(int i = 0; i <= len; i++){
            result[i] = i;
        }
        int status = 0;
        for(int i = 0; i < len; i++){
            if(s[i] == 'D' && status == 0){
                status = 1;
                reverse(result.begin() + i, result.end());
            }else if(s[i] == 'I' && status == 1){
                status = 0;
                reverse(result.begin() + i, result.end());
            }
        }
        return result;
    }
};