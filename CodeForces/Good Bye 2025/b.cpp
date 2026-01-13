using VLL = vector<LL>;
#define all(x) std::begin(x), std::end(x)
#define rall(x) rbegin(x), rend(x)
#define debug(x) cerr << __FUNCTION__ << ':' << __LINE__ << ' ' << #x << ' ' << (x) << '\n'
#define watch(x) cerr << (x) << " <== " << #x
#define isz(x) (int)((x).size())
const Real PI = acos(-1.0);
int MOD = (int)1e9 + 7;
string to_string(const char * ch)
{
    return string(ch);
}
 
template<typename ... pack>
void printer(pack ... args)
{
    ( cout << ... << (to_string(args) + " ")) << '\n';
}
 
template<typename T>
void operator<<(ostream& os, vector<T> arr)
{
    copy(all(arr), ostream_iterator<T>(os, " "));
}
const int INF = (int)1e9;
constexpr const int n = (int)1e6;
 
int findMaxForm(vector<string>& strs, int m, int n) {
        vector<pair<int,int>> pairs;
        pairs.reserve(strs.size());
        for(const auto& elem : strs)
        {
            pairs.push_back({count(all(elem),'0'), count(all(elem),'1')});
        }
        
        sort(all(pairs), [](const auto& left, const auto& right){return left.second + left.first < right.second + right.first;});
        pair<int,int> temp{m,n};
        int max_len = 0;
        for(const auto& elem : pairs)
        {
            if(temp.first - elem.first >= 0 && temp.second - elem.second >=0)
            {
                temp.first -= elem.first, temp.second -=elem.second;
                ++max_len;
            }
            else continue;
            
            
           if (temp.first + temp.second){
                return max_len;
           }
        }
        return max_len;
    }


void solve()
{
	vector<string> strs{"10", "1", "0"};
	cout << findMaxForm(strs, 1,1);
}
 
int main()
{
	solve;
}