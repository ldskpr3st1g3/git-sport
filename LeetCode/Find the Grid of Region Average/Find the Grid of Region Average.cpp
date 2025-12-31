#define all(x) std::begin(x), std::end(x)
using LL = long long int;
#define isz(x) (int)(x).size()

class Solution {
public:

    bool check(const auto& image, int threshold, int startI, int startJ) const
    {
        for(int i{startI}; i < startI+3; ++i)
            for(int j{startJ}; j < startJ+ 3; ++j)
            {
                if(i > startI && abs(image[i][j] - image[i-1][j]) > threshold) return false;
                if(j > startJ && abs(image[i][j] - image[i][j-1]) > threshold) return false;
            }
        return true;
    }

    int sum_counter(const auto& image, int StartI, int StartJ)
    {
        int counter = 0;
        for(int i{StartI}; i < StartI+3; ++i)
        {
            for(int j{StartJ}; j < StartJ + 3;++j)
            counter += image[i][j];
        }
        return counter / 9;
    }


    void adder(auto& graph, int startI, int startJ, int sum)
    {
        for(int i{startI}; i < startI+3; ++i)
        {
            for(int j{startJ}; j < startJ + 3;++j){
                graph[i][j].first += sum;
                ++graph[i][j].second;
            }
        }
    }

    vector<vector<int>> resultGrid(vector<vector<int>>& image, int threshold) 
    {
        int n, m;
        n = isz(image);
        m = isz(image[0]);
        vector<vector<pair<int,int>>> graph(n, vector<pair<int,int>>(m, {0,0}));
        for(int i{0}; i < n-2; ++i)
        {
            for(int j{0}; j < m-2; ++j)
            {
                
                if(bool flag = check(image,threshold, i, j) == false) continue;
                else 
                {
                    int Sum = sum_counter(image, i, j);
                    adder(graph, i,j,Sum);
                }
            }
        }
        for(int i{0}; i < n; ++i)
        {
            for(int j{0}; j < m; ++j)
            {
                if(graph[i][j].second != 0)
                {
                    image[i][j] = graph[i][j].first / graph[i][j].second;
                }
            }
        }
        return image;
    }
};


