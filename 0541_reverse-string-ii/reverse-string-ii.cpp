class Solution {
public:
    string reverseStr(string s, int k) {
        int len = s.length();
        int i;
        for(i = 0; i+k < len; i += k*2){
            reverse(s.begin()+(i), s.begin()+(i+k));
        }
        if(i%k == i%(2*k)){
            reverse(s.begin()+(i), s.end());
        }
        return s;
    }
};