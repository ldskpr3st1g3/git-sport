class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> vec;
        int temp= 0;
        vec.reserve(n);
        generate_n(back_inserter(vec), n-1, [x = 0, &temp]()mutable{x+=1; temp+=x; return x;});
        vec.push_back(std::move(-temp));
        return vec;
    }
};
