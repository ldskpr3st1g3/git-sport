#define all(x) std::begin(x), std::end(x)
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(all(nums));
        vector<vector<int>> answer;
        int n = (int)nums.size();
        answer.reserve(n/3 + 1);
        for(auto first{nums.begin()}; first != nums.end() -2; ++first)
        {
            if(first > nums.begin() && *first == *(first -1)) continue;
            auto left = first + 1;
            auto right = nums.begin() + n-1;
            while(left < right)
            {
                int temp = *first + *left + *right;
                if(temp == 0) 
                {
                    answer.push_back({*first, *left, *right});
                    while(left < right && *left == *(left+ 1)) ++left;
                    while(left < right && *right == *(right - 1)) --right;
                    --right;
                    ++left;
                }
                else if(temp > 0) --right;
                else ++left;
            }
        }
        return answer;
    }
};
