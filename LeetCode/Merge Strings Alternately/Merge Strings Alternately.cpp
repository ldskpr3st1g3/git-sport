class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        if(word1.empty()) return word2;
        if(word2.empty()) return word1;
        string res="";
        size_t iter = 0;
        while(iter < word1.size() || iter <word2.size())
        {
            if(iter<word1.size())
            {
                res+=word1[iter];

            }
            if(iter<word2.size())
            {
                res+=word2[iter];
            }
            ++iter;
        }
        return res;
        
    }
};
