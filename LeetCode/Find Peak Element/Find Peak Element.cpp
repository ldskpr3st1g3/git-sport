class Solution {
public:
    int findPeakElement(vector<int>& nums) 
    {
        int ind = 0;
        int mx = INT_MIN;
        for(int iter{0}; iter< nums.size(); ++iter)
        {
            if(nums[iter] > mx) mx = nums[iter], ind = iter;
        }
        return ind;
    }
};
