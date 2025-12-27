class Solution {
public:
    string toBinary(string s){
        int n = stringToInt(s);
        string result;
        while(n){
            result += to_string(n % 2);
            n /= 2;
        }
        reverse(result.begin(), result.end());
        return result;
    }

    int stringToInt(string s){
        int len = s.length();
        int result = 0;
        for(int i = 0; i < len; i++){
            result *= 10;
            result += s[i] - '0';
        }
        return result;
    }

    string convertDateToBinary(string date) {
        return toBinary(date.substr(0, 4)) + "-" + toBinary(date.substr(5, 2)) + "-" + toBinary(date.substr(8, 2));
    }
};