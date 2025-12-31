class Solution {
public:

    
    
    int totalWaviness(int num1, int num2) {
        int counter = 0;
        for(int i{num1}; i<=num2; ++i)
            {
                string temp = to_string(i);
                for(int j{1}; j < temp.size()-1; ++j)
                    {
                        if(temp[j] < temp[j-1] && temp[j]< temp[j+1]) ++counter;
                        else if(temp[j] > temp[j-1] && temp[j] > temp[j+1]) ++counter;
                    }
            }
        return counter;
    }
};
