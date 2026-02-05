class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        letters.erase(unique(letters.begin(),letters.end()), letters.end());
        for(auto iter = letters.begin(); iter != letters.end(); ++iter)
        {
            if(target < *iter) return *iter;
        }
        return letters[0];
    }
};
