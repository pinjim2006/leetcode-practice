class Solution {
public:
    string thousandSeparator(int n) {
        if(n == 0) return "0";
        string result = "";
        int count = 0;
        while(n){
            if(count == 3){
                result += '.';
                count = 0;
            }
            result += n % 10 + '0';
            n /= 10;
            count++;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};