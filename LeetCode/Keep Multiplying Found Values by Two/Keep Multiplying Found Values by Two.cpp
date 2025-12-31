class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(), nums.end());
        while(true)
        {
            
            if(!binary_search(nums.begin(),  nums.end(), original)) return original;
            original *= 2;
        }
        
    }
};
