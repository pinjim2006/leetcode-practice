class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string first = "qwertyuiopQWERTYUIOP";
        string second = "asdfghjklASDFGHJKL";
        string third = "zxcvbnmZXCVBNM";
        vector<string> result;
        
        for(int i = 0; i < words.size(); i++){
            bool check = true;
            if(first.find(words[i][0]) != string::npos){
                for(int j = 1; j < words[i].length(); j++){
                    if(first.find(words[i][j]) == string::npos){
                        check = false;
                        break;
                    }
                }
            }
            else if(second.find(words[i][0]) != string::npos){
                for(int j = 1; j < words[i].length(); j++){
                    if(second.find(words[i][j]) == string::npos){
                        check = false;
                        break;
                    }
                }
            }
            else if(third.find(words[i][0]) != string::npos){
                for(int j = 1; j < words[i].length(); j++){
                    if(third.find(words[i][j]) == string::npos){
                        check = false;
                        break;
                    }
                }
            }
            
            if(check) result.push_back(words[i]);
        }
        return result;
    }
};