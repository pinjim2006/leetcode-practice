class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> nums;
        int a, b;
        
        for(int i = 0; i < tokens.size(); i++){
            if(tokens[i].length() == 1 && !isdigit(tokens[i][0])){
                switch(tokens[i][0]){
                    case '+':
                        a = nums.top();
                        nums.pop();
                        b = nums.top();
                        nums.pop();
                        b += a;
                        nums.push(b);
                        break;
                    case '-':
                        a = nums.top();
                        nums.pop();
                        b = nums.top();
                        nums.pop();
                        b -= a;
                        nums.push(b);
                        break;
                    case '*':
                        a = nums.top();
                        nums.pop();
                        b = nums.top();
                        nums.pop();
                        b *= a;
                        nums.push(b);
                        break;
                    case '/':
                        a = nums.top();
                        nums.pop();
                        b = nums.top();
                        nums.pop();
                        b /= a;
                        nums.push(b);
                        break;
                }
            }else{
                nums.push(stoi(tokens[i]));
            }
        }
        return nums.top();
    }
};