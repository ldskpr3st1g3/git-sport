class Solution {
public:
    string getPermutation(int n, int k) 
    {
     string res="";
     int num = 1;
     while(num < n+ 1)
     {
        res += to_string(num);
        ++num;
    }   
    --k;
    while(k--)
    {
        next_permutation(res.begin(),res.end());
    }
    return res;
    }
};
