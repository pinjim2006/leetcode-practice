class Solution {
public:
    string reversePrefix(string s, int k) {
        int len = s.length();
        int n = len / k;
        reverse(s.begin(), s.begin() + k);
        return s;
    }
};