#define all(x) std::begin(x), std::end(x)
class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        map<pair<int,int>,int> dp;
        dp[{0,0}] = 0;
            
        for(const auto& word : strs)
        {
            int zeroes{}, ones{};
            for(const char& ch : word)
            {
                if(ch == '0') zeroes++;
                else ++ones;
            }
            map<pair<int,int>,int> new_dp;
            for(const auto& [quantity, len] : dp)
            {
                int used_zeroes = quantity.first + zeroes;
                int used_ones = quantity.second + ones;
                if(used_zeroes <= m && used_ones <= n)
                {
                    if(!dp.count({used_zeroes, used_ones}) || dp[{used_zeroes, used_ones}] < len + 1) new_dp[{used_zeroes, used_ones}] = len + 1;
                }
            }
            for(const auto& [quantity, len] : new_dp)
            {
                dp[quantity]= max(dp[quantity], len);
            }
        }
        int result{};
        for(const auto&[_, len] : dp) result = max(result, len);
        return result;
                
    }
};
