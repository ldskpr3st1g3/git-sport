class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        bool flag = false;
        int index = s.size() - 1;
        while(flag == 0 && index >= 0)
        {
             if(s[index] == '1') swap(s[index], s.back()), flag = true;
             --index;
        }
        int temp = 0;
        for(int i{0}; i <= index; ++i)
        {
            if(s[i] == '1') swap(s[temp++], s[i]);
        }
        return s;
        
    }
};
