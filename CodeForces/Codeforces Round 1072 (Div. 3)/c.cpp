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
     
     
    LL BFS(LL n, LL key)
    {
    	queue<LL> q;
    	int counter = 0;
    	q.push(n);
    	unordered_set<LL> visited;
    	visited.insert(n);
    	while(!q.empty())
    	{
    		++counter;
    		int reps = isz(q);
    		for(int i{0}; i < reps; ++i)
    		{
    			LL temp = q.front();
    			q.pop();
    			
    			if(temp & 1)
    			{
    				LL first = temp/ 2;
    				LL second = temp/2 + 1;
    				if(first == key || second == key) return counter;
    				if(first != 1 && visited.find(first) == visited.end())q.push(first),visited.insert(first);
    				if(second != 1 && visited.find(second) == visited.end())q.push(second),visited.insert(second);
    			}
    			else 
    			{
    				LL first = temp /2;
    				if(first == key) return counter;
    				if(first != 1 && visited.find(first) == visited.end()) q.push(first), visited.insert(first);
    			}
    		}
    	}
    	return -1;
    }
     
    	
     
     
    void solve()
    {
    	int T;
    	cin >> T;
    	while(T-->0)
    	{
    		LL n,k;
    		cin >> n >> k;
    		if(k > n) {cout << -1 << '\n'; continue;}
    		if(k == n){cout << 0 << '\n'; continue;}
    		cout << BFS(n, k) << '\n';
    	}
    }
     
    int main()
    {
    	solve();
    }
