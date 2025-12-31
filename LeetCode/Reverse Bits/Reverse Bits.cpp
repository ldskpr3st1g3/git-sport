class Solution {
public:
    int reverseBits(int n)
    {
        auto temp=  bitset<32>(n).to_string();
        reverse(temp.begin(),temp.end());
        return static_cast<unsigned int>(bitset<32>(temp).to_ulong());
    }
};
