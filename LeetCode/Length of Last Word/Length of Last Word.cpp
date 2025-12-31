class Solution {
public:
    int lengthOfLastWord(string s) 
    {

        int end = s.size()-1;
        while(end >=0 && s[end] == ' ')
            end--;
        const int first = end;
        while(end >= 0 && s[end] != ' ')
            end--;
        return first - end;

    }
};
