class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n == 0) return 0;
        string temp = to_string(n);
        string res;
        long long summ = 0;
        copy_if(temp.begin(), temp.end(), res.begin(),[&](const auto &elem){summ += elem - '0'; return elem != '0';});
        return stol(res) * summ;
        
    }
};
