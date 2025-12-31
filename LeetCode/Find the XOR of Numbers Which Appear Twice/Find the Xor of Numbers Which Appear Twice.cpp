class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) 
    {
        int res = 0;
        map<int, int> x;
        for(const auto &elem : nums) ++x[elem];
        for(const auto &[key, val] : x)
        {
            if(val >1) res^=key;
        }
        return res;
        
    }
};
