class Solution 
{
    bool check(const char& c)
    {
        if(c=='a' || c == 'o' || c == 'e' || c == 'u' || c== 'i') return true;
        if(c=='A' || c == 'O' || c == 'E' || c == 'U' || c =='I') return true;
        return false;
    }
public:
    string reverseVowels(string s) 
    {
        size_t left=0;
        size_t right=s.size()-1;
        while(left < right)
        {
            if(check(s[left]) && check(s[right])) swap(s[left], s[right]),left++,right--;
            else if(!check(s[left])) ++left;
            else if(!check(s[right])) --right;
            else ++left,--right;
        }
        return s;
    }
};
