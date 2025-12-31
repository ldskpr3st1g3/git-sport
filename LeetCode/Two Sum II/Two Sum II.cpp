class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int &target) 
    {
        int l{0};
        int r{int(numbers.size())-1};
        while(l < r)
        {
            int mid = numbers[l] + numbers[r];
            if(mid == target) return {l+1 , r + 1};
            else if(mid > target) r--;
            else l++;
        }
        return {-1, -1};
    }
};
