class Solution {
public:
    int titleToNumber(string columnTitle) 
    {
        int ans = 0;
        for(int i{0}; i < columnTitle.length(); ++i)
        {
            if(i == 0)
            {
                ans+= columnTitle[i] - 'A' + 1;
            }
            else 
            {
                ans*=26;
                ans+=columnTitle[i] - 'A' + 1;
            }

        }
        return ans;
    }
};
