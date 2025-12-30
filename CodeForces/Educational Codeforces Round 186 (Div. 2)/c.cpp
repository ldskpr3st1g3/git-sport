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




bool check(const vector<int>& greater, const vector<int>& less, int n, int k)
{
	for(int i{0}; i < n; ++i)
		if(greater[i] <= less[(i + k) % n]) return false;
	return true;
}
void solve()
{
	int n;
	cin >> n;
	vector<int> first(n);
	for(auto& elem : first) cin >> elem;
	vector<int> second(n);
	for(auto& elem : second) cin >> elem;
	vector<int> thirth(n);
	for(auto& elem : thirth) cin >> elem;
	int counter_1{}, counter_2{};
	for(int i{0};i< n;++i)
	{
		counter_1 += check(second, first, n, i);
		
		counter_2 += check(thirth, second, n , i);
	}
	cout << (counter_1 * 1LL * counter_2 * n)<< '\n';
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int T; cin >> T;
	while(T-->0)
	{
		solve();
	}
}