int mod = 1e9 + 7;
class Solution {
public:

    int helper(long long x)
    {
        return x * (++x) / 2 % mod;
    }

    int numSub(string s) {
        vector<string> dum;
        long long res = 0LL;
        string temp ="";
        for(const auto& elem : s)
        {
            if(elem == '1') temp += '1';
            else dum.push_back(temp), temp.clear();
        }
        dum.push_back(temp);
        for(const auto& elem : dum)
        {
            int sz = elem.size();
            res += helper(sz);
        }
        return static_cast<int>(res);
    }
};
