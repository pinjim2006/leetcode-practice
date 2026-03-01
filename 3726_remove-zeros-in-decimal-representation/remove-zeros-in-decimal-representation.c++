class Solution {
public:
    long long removeZeros(long long n) {
        string s = to_string(n);
        long long result = 0;
        for(int i = 0; s[i] != '\0'; i++){
            if(s[i] != '0'){
                result *= 10;
                result += s[i] - '0';
            }
        }
        return result;
    }
};