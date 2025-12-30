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
     
     
    int solve()
    {
    	int a,b;
    	cin >> a >> b;
    	if(a < b) swap(a,b);
    	int total = 0;
    	LL cost = 1;
    	bool flag = true;
    	int result{};
    	for(int i{0}; i < 2; ++i)
    	{
    		int white = a, dark = b;
    		int floor{};
    		cost = 1;
    		while(true)
    		{
    			if(flag)
    			{
    				if(white >= cost) white-=cost, ++floor;
    				else break;
    			}
    			else 
    			{
    				if(dark >= cost) dark-=cost, ++floor;
    				else break;
    			}
    			flag = !flag;
    			cost <<= 1;
    		}
    		result = max(result, floor);
    	}
    	return result;
    }
     
     
     
    int main()
    {
    	ios_base::sync_with_stdio(false);
    	cin.tie(nullptr);
    	int T; cin >> T;
    	while(T-->0)
    	{
    		cout << solve() << '\n';
    	}
    	
    }