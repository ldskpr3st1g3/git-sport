class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end(),[](const int &lhs, const int &rhs){return lhs < rhs;}); 
        nums.erase(unique(nums.begin(),nums.end()), nums.end());  
        if(nums.front() > 1 || nums.back() <= 0) return 1;
        int ans = 1;
        for(int i{0}; i < nums.size(); ++i)
        {
            if(nums[i] <=0) continue;
            else
            {
            if(nums[i] == ans) ++ans;
                else return ans;
            }
        }
        return nums.back()+1;
    }
};
