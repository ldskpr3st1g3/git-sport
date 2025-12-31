class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        triangle.reserve(numRows);
        vector<int> temp;
        for(int i{0}; i < numRows; ++i)
        {
            temp.resize(i+1, 1);
            for(int k{1}; k < i ; ++k)
                temp[k] = temp[k-1] * (i - k + 1) / k;
            triangle.push_back(temp);
        }
        return triangle;
        
        
    }
};
