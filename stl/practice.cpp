// In the name of God.
// We're nothing and you're everything.
//Ya Smruti!
//-------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;
//-------------------------------------------------------------------------------------------------
#define ll long long
#define nl cout <<endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define vl vector<ll>
#define pll pair<ll, ll>
#define mll map<ll, ll>
#define msl map<string,ll>
#define mls map<ll,string>
#define umll unordered_map<ll,ll>
#define umsl unordered_map<string,ll>
#define umls unordered_map<ll,string>
#define sl set<ll>
#define ss set<string>
#define usl unordered_set<ll>
#define uss unordered_set<string>
#define in(n) cin >> n
#define in2(n, m) cin >> n >> m
#define sizear(arr) sizeof(arr)/sizeof(arr[0]);
#define fo(i,a,n) for(ll i=a;i<n;i++)
#define endl "\n"
//-------------------------------------------------------------------------------------------------
ll power(ll a, ll b) {
	if (b == 0)
		return 1;
	ll temp = power(a, b / 2);
	ll ans = temp * temp;
	if (b & 1)ans = ans * a;
	return ans;
}
//--------------------------------------------------------------------------------------------------
void solve() {
	ll n; in(n);
	vl v(n);
	fo(i, 0, n)in(v[i]);

	// ll minimum = *min_element(v.begin(), v.end());
	// cout << "Minimum= " << minimum << endl;
	// ll maximum = *max_element(v.begin(), v.end());
	// cout << "Maximum= " << maximum << endl;
	// ll sum = accumulate(v.begin(), v.end(), 0);
	// cout << "Sum of all the elemnts in the vector= " << sum << endl;
	// ll ct = count(v.begin(), v.end(), 2);
	// cout << "The count of 2 is= " << ct << endl;
	// auto it = find(v.begin(), v.end(), 10);

	// if (it != v.end())cout << "10 Present" << endl;
	// else cout << "10 Not present" << endl;

	// reverse(v.begin(), v.end());
	// for (auto val : v) {
	// 	cout << val << " ";
	// }
	// nl;

	//Lambda function

	//syntax=[](int x){return x+2;}(2) //calling of lambda function

	// auto sum = [](int x) {return x + 2;} ;
	// cout << sum(4) << endl;  //6

	// auto Ispositive = [](int x) {return x > 0;};
	// cout << all_of(v.begin(), v.end(), Ispositive) << endl;  //1

	// auto Isnegative = [](int x) {return x < 0;};
	// cout << any_of(v.begin(), v.end(), Isnegative) << endl;

	// auto Iszero = [](int x) {return x = 0;};
	// cout << none_of(v.begin(), v.end(), Iszero) << endl; //1

	for (auto val : v) {
		cout << val << " ";
	}
	cout << endl;
	cout << "--------------------" << endl;
}
int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	ll t;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}