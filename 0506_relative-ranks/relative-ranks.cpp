class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> result;
        result.resize(score.size());
        for(int i = 0; i < score.size(); i++){
            int curMax = -1;
            int index = -1;
            for(int j = 0; j < score.size(); j++){
                if(score[j] > curMax){
                    curMax = score[j];
                    index = j;
                }
            }
            if(i > 2){
                result[index] = to_string(i+1);
            }else if(i == 0){
                result[index] = "Gold Medal";
            }else if(i == 1){
                result[index] = "Silver Medal";
            }else if(i == 2){
                result[index] = "Bronze Medal";
            }
            score[index] = -1;
        }
        return result;
    }
};