class Solution {
public:
    int smallestNumber(int n) 
    {
        string temp = bitset<32>(n).to_string();
        temp = temp.substr(temp.find('1'));
        if(temp.find('0') == string::npos) return n;
        else
        {
            return stoi(string((int)temp.size(), '1'), nullptr, 2);
        }
        return 0;
    }
    
};
