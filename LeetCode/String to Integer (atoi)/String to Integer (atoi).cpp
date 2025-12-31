class Solution {
public:
    int myAtoi(string s) {
        
        long long int n;
        sscanf(s.c_str(), "%lld", &n);
        if(n > INT_MAX) return INT_MAX;
        else if(n < INT_MIN) return INT_MIN;
        return static_cast<int>(n);
    }
};
