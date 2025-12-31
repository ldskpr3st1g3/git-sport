#define all(x) std::begin(x), std::end(x)

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n,m;
        n = (int)s1.size();
        m = (int)s2.size();
        if(n > m) return false;
        vector<int> freq1(26, 0);
        for_each(all(s1), [&](const auto& elem){freq1[elem - 'a']++;});
        vector<int> freq2(26,0);
        for(int i{0}; i < n;++i)
        {
            freq2[s2[i] - 'a']++;
        }
        if(freq1 == freq2) return true;
        for(int i{n}; i < m; ++i)
        {
            freq2[s2[i - n] - 'a']--;
            freq2[s2[i] - 'a']++;
            if(equal(all(freq1),all(freq2))) return true;
        }
        return false;
        
    }
};
