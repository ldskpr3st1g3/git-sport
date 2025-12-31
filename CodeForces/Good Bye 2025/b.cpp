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
	string str; cin >> str;
	str = "u" + str + "u";
	int ans = 0;
	for(int i{1}; i < (int)str.size(); ++i) if(str[i-1] == 'u' && str[i] == 'u') str[i] = 's', ++ans;
	cout << ans << '\n';
}
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T; cin >> T;
	while(T-->0)
	{
		solve();
	}
	
}