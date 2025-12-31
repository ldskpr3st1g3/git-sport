class Solution {
public:
    bool canSortArray(vector<int>& nums) 
    {
        if(is_sorted(nums.begin(), nums.end())) return true;
        int n = static_cast<int>(nums.size());
        int temp = 0;
        int helper = 0;
        vector<int> tempo;
        vector<int> ans;
        ans.reserve(n);
        tempo.reserve(n);
        for(const auto& elem : nums)
        {
            int cur = __builtin_popcount(elem);
            if(elem < temp  && cur != __builtin_popcount(temp)) return false;
            temp = max(temp, elem);
            if(helper == cur) tempo.emplace_back(elem);
            else helper = cur,sort(tempo.begin(),tempo.end()), copy(tempo.begin(),tempo.end(),back_inserter(ans)), tempo.clear(), tempo.emplace_back(elem);
        }
        sort(tempo.begin(),tempo.end()), copy(tempo.begin(),tempo.end(),back_inserter(ans)), tempo.clear();
        return is_sorted(ans.begin(),ans.end());
    }
};
