class Solution {

    int reverse_bits(int bits)
    {
        auto  a = bitset<32>(bits).to_string();
        a = a.substr(a.find('1'));
        reverse(a.begin(), a.end());
        return stoi(a, nullptr, 2);
    }
    
public:
    
    vector<int> sortByReflection(vector<int>& nums) {
        sort(nums.begin(), nums.end(),[&](const int& left, const int& right){
            int first = reverse_bits(left);
            int second = reverse_bits(right);
            if(first != second) return first < second;
            else return left < right;
        });
        return nums; 
    }
};
