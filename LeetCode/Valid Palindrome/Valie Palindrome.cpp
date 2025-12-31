class Solution {
public:
    bool isPalindrome(string s) 
    {
        s.erase(remove_if(s.begin(), s.end(),[](const auto &elem){return !((elem >='a' && elem <='z') || (elem >='A' && elem <= 'Z') || (isdigit(elem)));}), s.end()); 
        transform(s.begin(), s.end(), s.begin(), [](auto &elem){return tolower(elem);});
        int n = s.length();
        for(int i = 0; i <n/2; ++i)
        {
            if(s[i] != s[n-i-1]) return false;
        }
        return true;
    }
};
