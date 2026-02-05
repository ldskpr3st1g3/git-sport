class Solution {
public:
    int minimumCost(vector<int>& nums) {
        pair<int,int> temp{60,60};
        for(auto iter = nums.begin()+1; iter!= nums.end(); ++iter)
        {
            if((*iter) < temp.first) temp.second = std::exchange(temp.first, (*iter));
            else if(*iter < temp.second) temp.second = (*iter);
        }
        return *nums.begin() + temp.first + temp.second;
    }
};
