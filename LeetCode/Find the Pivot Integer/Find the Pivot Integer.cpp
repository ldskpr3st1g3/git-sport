class Solution {
public:
    int pivotInteger(int n) {
        if (n==1) return 1;
        vector<int> vec;
        vec.reserve(n);
        int total=0;
        generate_n(back_inserter(vec), n, [&total,x=0]()mutable{ total += ++x;return x;});
        int temp = 0;
        for(const auto& elem : vec)
        {
            temp+=elem;
            if(temp == total - temp + elem) return elem;
        }
        return -1;
        

    }
};
