class Solution {
public:
    char findTheDifference(string s, string t) {
        char res= 0;
        for(int i{0}; i < t.length(); ++i)
        if(i < s.size())
        {
            res^=s[i];
            res^=t[i];
        }
        else res^=t[i];
        return res;
    }
};
