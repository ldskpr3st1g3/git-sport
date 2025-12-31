class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        vector<int> temp ;
        temp.reserve(nums.size());
        for(int i{0}; i < nums.size(); ++i)
        {
            if(nums[i] == 1) temp.push_back(i);
        }
        for(int i{1}; i < temp.size(); ++i)
        {
            if(temp[i] - temp[i-1] < k+1) return false;
        }
        return true;
    }
};
