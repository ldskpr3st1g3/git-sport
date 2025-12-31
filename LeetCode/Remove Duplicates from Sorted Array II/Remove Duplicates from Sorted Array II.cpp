class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int temp = 2;
        int sz = nums.size();
        if(sz < 2 ) return sz;
        for(int i{2}; i<sz ; ++i)
        {
            if(nums[i] != nums[temp-2]) 

            nums[temp] = nums[i],
            ++temp;
        }

        return temp;
    }
};
