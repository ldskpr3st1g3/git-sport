class Solution {
public:
    int minimumFlips(int n) {
        string ord = bitset<32>(n).to_string();
        ord = ord.substr(ord.find('1'));
        string temp = ord;
        reverse(temp.begin(), temp.end());
        int counter=0;
        for(int i{0}; i < ord.size(); ++i)
            {
                if(ord[i] != temp[i]) ++counter;
            }
        return counter;
    }
};
