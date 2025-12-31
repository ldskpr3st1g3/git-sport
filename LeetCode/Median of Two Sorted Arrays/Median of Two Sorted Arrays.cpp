#define all(x) (x).begin(), (x).end()
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> vec;
        int s = nums1.size() + nums2.size();
        vec.reserve(s);
        merge(all(nums1), all(nums2), back_inserter(vec));
        return s&1 ? static_cast<double>(vec[s/2]) : static_cast<double>(vec[s/2] + vec[s/2-1])/2; 
    }
};
