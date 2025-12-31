#define all(x) std::begin(x), std::end(x)
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int counter_less = 0;
        int counter_greater = 0;
        for_each(all(nums),[&](const auto& number){if(number < 0) ++counter_less; if(number > 0) ++counter_greater;});
        return max(counter_less, counter_greater);
        
    }
};
