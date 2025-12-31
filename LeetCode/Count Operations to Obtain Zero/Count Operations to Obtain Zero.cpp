class Solution {
public:
    int countOperations(int num1, int num2) {
        int temp=0;
        if(num1 == 0 || num2 == 0) return 0;
        while(true)
        {
            if(num1 >= num2) num1-=num2, ++temp;
            else num2-=num1, ++temp;
            if(num1 == 0 || num2==0) return temp;
        }

    }
};
