class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        nums.erase(remove_if(nums.begin(), nums.end(), [&](const int &elem){return elem == val;}), nums.end());
        return nums.size();        
    }
};
