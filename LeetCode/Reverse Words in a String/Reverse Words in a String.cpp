class Solution {
public:
    string reverseWords(string s) 
    {
        stringstream ss(s);
        string word;
        vector<string> words;
        while(ss >> word)
            words.push_back(word);
        
        reverse(words.begin(), words.end());
        string res ="";
        for(size_t iter{0}; iter < words.size(); ++iter)
        {
            res += (iter < words.size()-1 ? words[iter] + " " : words[iter]);
        }
        return res;
    }
};
