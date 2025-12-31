const int MAX_N = static_cast<int>(1e6 * 5);
class Solution {
public:
    int countPrimes(int n) 
    {
        vector<bool> vec(n+1, true);
        vec[0] = false;
        vec[1] = false;
        for(long long int i{2}; i*i <= n; ++i)
        {
            if(vec[i])
            {
                for(long long int mult{i*i}; mult <= n; mult+=i)
                {
                    vec[mult] = false;
                }
            }
        }
        return count_if(vec.begin(), vec.end()-1,[](const auto &elem){return elem == true;});
    }
};
