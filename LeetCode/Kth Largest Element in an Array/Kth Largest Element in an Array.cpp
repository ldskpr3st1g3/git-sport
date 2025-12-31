class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        nth_element(nums.begin(), nums.begin()+k-1, nums.end(),[](const auto& a, const auto& b){return a > b;});
        return nums[k-1];

    }
};
