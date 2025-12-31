class Solution {
public:
    int largestAltitude(vector<int>& gain) 
    {
        int sum = 0;
        int maxi = 0;
        for(const int &elem : gain)
        {
            sum +=elem;
            maxi = (sum > maxi ? sum : maxi);
        }
        return maxi;
    }
};
