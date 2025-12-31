class Solution {
public:
    bool checkPerfectNumber(int num) 
    {
        if(num == 2 || num == 1) return false;
        int sum;
        num&1 ? sum = 1 : sum = num/2 + 1;
        for(int i{2}; i < num/2; ++i)
            {
                if(num % i == 0) sum +=i;
                if(sum > num) return false;
            }
        return sum == num ? true : false;
    }  
};
