class Solution {
public:
    string longestCommonPrefix(vector<string>& str) 
    {
        if(str.empty()) return "";
        set<string> strs{str.begin(), str.end()};
        string res = "", first = *strs.begin(), last = *strs.rbegin();
        for(size_t i{0}; i < first.size(); ++i)
        {
            if(i < last.size() && first[i] == last[i])
            {
                res+=first[i];
            }
            else break;
        }
        return res;
    }
};
