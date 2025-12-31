class Solution {
public:

    int s1(const string& s, int left, int right)
    {
        while(left>=0 && right < s.size() && s[left] == s[right]) --left, ++right;
        return right - left - 1;
    }

    string longestPalindrome(string s) 
    {
        string ans = "";
        for(int i{0}; i < s.size(); ++i)
        {
            int c = max(s1(s,i,i), s1(s,i,i+1));
            if(c > ans.size())
            {
                int start = i - (c - 1) / 2;
                ans = s.substr(start, c);
            }
        }
        return ans;
    }
};
