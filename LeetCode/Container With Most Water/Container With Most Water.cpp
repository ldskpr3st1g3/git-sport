using LL = long long int;
class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int n = static_cast<int>(height.size()) - 1;
        int ans = 0LL;
        int left = 0;
        int right = n;
        int temp =0;
        while(left < right)
        {
            temp = min(height[left], height[right]);
            ans = max(ans, n * temp);
            --n;
            if(temp == height[left])
            {
                ++left;
            }
            else
            {
                --right;
            }
        }
        return ans;

    }
};
