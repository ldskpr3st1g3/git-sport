class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        unordered_map<int,int> dict;
        for(const auto& elem : nums)
        {
            ++dict[elem];
            if(dict[elem] == 3) dict.erase(elem);
        }
        return (*dict.begin()).first;
    }
};
