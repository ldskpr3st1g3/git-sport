class Solution {
public:
    int countPalindromicSubsequence(string s) 
    {
     unordered_map<char, vector<int>> m;
     for(int i{0}; i < s.size(); ++i)
     {
        m[s[i]].emplace_back(i);
     }  
     set<string> temp; 
     for(const auto& [key, value] : m)
     {
        if(value.size() >= 2)
        {
            for(int i{value.front()+1}; i < value.back(); ++i)
            {
                temp.insert(string(1, s[value.front()]) + string(1, s[i]) + string(1, s[value.back()]));
            }
        }
     }
     return temp.size();
    }
};
