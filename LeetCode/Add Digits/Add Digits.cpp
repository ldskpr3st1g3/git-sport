class Solution {
    int summ(int num)
    {
        int res=0;
        while(num != 0)
        {
            res+=num%10;
            num/=10;
        }
        return res;
    }
public:
    int addDigits(int num) 
    {
        if(num == INT_MAX) return 1;
        int i = summ(num);
        if(i <= 9) return i;
        else return addDigits(i);   
    }
};
