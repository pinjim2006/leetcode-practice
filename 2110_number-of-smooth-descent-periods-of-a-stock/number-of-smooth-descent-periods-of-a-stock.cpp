class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        int count = 1;
        long long result = 0;
        for(int i = 1; i < prices.size(); i++){
            if(prices[i-1] - prices[i] == 1){
                count++;
            }else{
                result += fac(count);
                count = 1;
            }
        }
        result += fac(count);
        return result;
    }
    long long fac(int n){
        long long result = 0;
        for(int i = n; i >= 1; i--) result += i;
        return result;
    }
};