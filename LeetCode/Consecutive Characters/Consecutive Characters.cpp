class Solution {
public:
    int maxPower(string s) {
        int counter = 0;
        int cur = 0;
        char temp = 'A';
        for(const auto& elem : s)
        {
            if(temp == elem)
            ++cur;
            else {
                counter = max(cur, counter);
                cur=1;
                temp = elem;
            }
        }
        counter = max(counter, cur);
        return counter;
        
    }
};
