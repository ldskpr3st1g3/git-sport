class Solution {
public:
    bool hasSameDigits(string s) {
        if(s.size() == 2) return s[0] == s[1];
        string temp = "";
        for(int i{0}; i < s.size()-1; ++i)
        {
            temp += to_string(((s[i] - '0') + (s[i+1] -'0')) %10);
        }
        return hasSameDigits(temp);
    }
};
