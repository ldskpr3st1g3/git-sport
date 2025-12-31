class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr)
    {
        map<int,int> res;
        set<int> temp;
        for(const auto &elem : arr)
        {
            ++res[elem];
        }   
        for(const auto& [value, quantity] : res)
        {
            auto[iter, is_inserted] = temp.insert(quantity);
            if(!is_inserted)
                return false;
        }
        return true;
    }
};
