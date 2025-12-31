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
    		string str;
    		cin >> str;
    		cout << (count(all(str),'Y') < 2 ? "YES" : "NO") << '\n';
    	}
    }
     
     
     
    int main()
    {
    	ios_base::sync_with_stdio(false);
    	cin.tie(nullptr);
    	solve();
    	
    }