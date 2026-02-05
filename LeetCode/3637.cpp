class Solution {
public:
    bool isTrionic(vector<int>& nums) 
    {
        pair<bool, int> increasing{1,0};
        int prev = *nums.begin();
        for(auto iter = nums.begin()+1; iter != nums.end(); ++iter)
        {
            if(*iter > prev)
            {
                if(!increasing.first) increasing.first = 1, ++increasing.second;
            }
            else if(*iter < prev)
            {
                if(distance( nums.begin(), iter) == 1) return false;
                if(increasing.first) increasing.first = 0, ++increasing.second;
            }
            else return false;
            if(increasing.second > 2) return false;
            prev = *iter;
        }   
        return increasing.second == 2;
    }
};
