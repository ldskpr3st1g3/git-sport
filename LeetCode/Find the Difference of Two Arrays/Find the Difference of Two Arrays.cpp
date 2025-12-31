class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) 
    {
        set<int> s1{nums1.begin(),nums1.end()};
        set<int> s2{nums2.begin(), nums2.end()};
        vector<vector<int>> res(2);
        for(const auto &elem : s1)
        {
            if(!s2.contains(elem)) res[0].push_back(elem);
        }  
        for(const auto &elem : s2)
        {
            if(!s1.contains(elem)) res[1].push_back(elem);
        }
        return res;
    }
};
