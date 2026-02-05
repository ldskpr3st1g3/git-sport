constexpr const int n = (int)1e4;
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        bitset<n> a;
        for(auto start = nums.begin(), end = nums.end()-1; start <= end; ++start,--end)
        {
            if(a[*end]) return *end;
            a[*end] = 1;
            if(a[*start]) return *start;
            a[*start] = 1;
        }
        return {};
    }
};
