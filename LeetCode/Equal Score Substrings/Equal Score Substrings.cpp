class Solution {
public:
    bool scoreBalance(string s) {
        int temp =0;
        for_each(s.begin(), s.end(),[&](const auto& elem){temp += elem - 'a' + 1;});
        int cur = 0;
        for(const auto& elem : s)
            {
                cur += elem -'a' + 1;
                if(temp - cur == cur) return true;
            }
        return false;        
    }
};
