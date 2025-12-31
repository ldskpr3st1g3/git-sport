class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int n = nums.size();
        if(n == 1) return 1;
        int cur=1;
        for(int temp{1} ; temp < n; ++temp)
        {
            if(nums[temp] != nums[cur -1])
            {
                nums[cur] = nums[temp];
                ++cur;
            }
        }
        return cur;
    }
};
