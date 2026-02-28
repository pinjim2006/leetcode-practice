class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds) {
        vector<int> result;
        if(rounds.front() <= rounds.back()){
            for(int i = rounds.front(); i <= rounds.back(); i++){
                result.push_back(i);
            }
        }else{
            for(int i = 0; i <= n - (rounds.front() - rounds.back()); i++){
                result.push_back(rounds.front() + i <= n ? rounds.front() + i : rounds.front() + i - n);
            }
            sort(result.begin(), result.end());
        }
        return result;
    }
};