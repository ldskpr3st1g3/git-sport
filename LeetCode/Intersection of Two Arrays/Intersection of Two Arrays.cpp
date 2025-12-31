class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vec;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        set_intersection(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), back_inserter(vec));
        vec.erase(unique(vec.begin(), vec.end()),vec.end());
        return vec;
        
    }
};
