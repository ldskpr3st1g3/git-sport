class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        if(k == 0) return nums.size();
        sort(nums.begin(),nums.end());
        int index = nums.size() - k -1;  
        while(index >= 0 && nums[index] == nums[index+1])
            --index;
        if(index <= -1) return 0;
        else return index + 1;
    }
};
