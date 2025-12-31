    #include<bits/stdc++.h>
    #include<memory>
    #include<regex>
    #pragma GCC optimize("Ofast")
    using namespace std;
    using LL = long long int;
    using Real = long double;
    using Complex = complex<Real>;
    using VI = vector<int>;
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
     
    void solve()
    {
    	int T; cin >> T;
    	while(T-->0)
    	{
    		int n;
    		cin >> n;
    		vector<int> vec(n); for(auto& elem : vec) cin >> elem;
    		int temp{};
    		int answer{};
    		int total{};
    		for(int i{1}; i < n-1; ++i)
    		{
    			temp = abs(vec[i-1] - vec[i]) + abs(vec[i] -vec[i+1]) - abs(vec[i-1] - vec[i+1]);
    			answer = max(temp, answer);
    			total += abs(vec[i] - vec[i-1]);
    		}
    		total += abs(vec[n-1] - vec[n-2]);
    		answer = max({abs(vec[0] - vec[1]), answer, abs(vec[n-1] - vec[n-2])});
    		cout << total - answer << '\n';
    		
    	}
    }
     
     
     
    int main()
    {
    	ios_base::sync_with_stdio(false);
    	cin.tie(nullptr);
    	solve();
    	
    }