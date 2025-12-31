
using Complex = complex<int>;
class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        
        double max_area = 0.;
        int n = (int)points.size();
        for(int i{0}; i < n; ++i)
        {
            Complex a(points[i][0],  points[i][1]);
            for(int j{i + 1}; j < n; ++j)
            {
                Complex b(points[j][0], points[j][1]);
                for(int z{j+1}; z < n; ++z)
                {
                    Complex c(points[z][0], points[z][1]);
                    auto ab = b -a;
                    auto ac = c -a ;
                    max_area = max(max_area, abs((conj(ab)* ac).imag()) * 0.5);
                }
                
            }
        }
        return max_area;
        
    }
};
