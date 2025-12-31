class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int n = static_cast<int>(s.size());
        if(n == 0) return 0;
        unordered_map<char,int> m;
        int ans=0;
        int left = 0;
        for(int right{0}; right < n; ++right)
        {
            ++m[s[right]];
            while(m[s[right]] > 1) 
            {
                --m[s[left]];
                ++left;
            }
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};