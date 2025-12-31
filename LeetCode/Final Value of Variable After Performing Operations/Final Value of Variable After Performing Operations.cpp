class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
    int counter = 0;
    for(const auto& ch : operations)
    {
        counter += ch[1] == '+';
        counter -= ch[1] == '-';
    }
    return counter;
    }
};
