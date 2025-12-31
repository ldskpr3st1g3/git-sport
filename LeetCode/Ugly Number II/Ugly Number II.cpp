class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> vec(n);
        vec[0] = 1;
        int i2, i3, i5;
        i2 = i3 = i5 = 0;
        for(int i{1}; i < n; ++i){
            vec[i] = min(vec[i2]*2, min(vec[i3]*3, vec[i5]*5));
            if(vec[i] == vec[i2]*2) ++i2;
            if(vec[i] == vec[i3]*3) ++i3;
            if(vec[i] == vec[i5]*5) ++i5;
        }
        return vec[n-1];

    }
};
