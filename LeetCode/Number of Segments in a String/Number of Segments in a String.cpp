class Solution {
public:
    int countSegments(string s) {
        if(s.empty()) return 0;
        int counter = 0;
        string temp = "";
        for(const auto& elem : s)
        {
            if(isspace(elem))
            {
                counter += (!temp.empty());
                temp.clear();
            }
            else temp += elem;
        }
        counter += (!temp.empty());
        return counter;
    }
};
