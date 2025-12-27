class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;
        int sum = 0;
        int n = operations.size();
        int tmp;
        for(int i = 0; i < n; i++){
            switch(operations[i][0]){
                case 'C':
                    sum -= record.back();
                    record.pop_back();
                    break;
                case 'D':
                    tmp = record.back() * 2;
                    record.push_back(tmp);
                    sum += tmp;
                    break;
                case '+':
                    tmp = record[record.size() - 2] + record.back();
                    record.push_back(tmp);
                    sum += tmp;
                    break;
                default:
                    tmp = stoi(operations[i]);
                    record.push_back(tmp);
                    sum += tmp;
                    break;
            }
        }
        return sum;
    }
};