#include <bits/stdc++.h>
using namespace std;
//-------------------------------------------------------------------------------------------------
// Macros
#define ll long long
#define nl cout << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define vl vector<ll>
#define pll pair<ll, ll>
#define mll map<ll, ll>
#define msl map<string, ll>
#define mls map<ll, string>
#define umll unordered_map<ll, ll>
#define umsl unordered_map<string, ll>
#define umls unordered_map<ll, string>
#define sl set<ll>
#define ss set<string>
#define usl unordered_set<ll>
#define uss unordered_set<string>
#define in(n) cin >> n
#define in2(n, m) cin >> n >> m
#define sizear(arr) sizeof(arr) / sizeof(arr[0]);
#define fo(i, a, n) for (ll i = a; i < n; i++)
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
//-------------------------------------------------------------------------------------------------
// Constants
constexpr ll INF = 2e18;
constexpr ll MOD = 1e9 + 7;
constexpr double EPS = 1e-6;
constexpr ll M = 1e18 + 7;
//-------------------------------------------------------------------------------------------------
// Oerator Overloads
template <typename T> // cin>>vector<T>
istream &operator>>(istream &istream, vector<T> &v)
{
    for (auto &it : v)
        cin >> it;
    return istream;
}
template <typename T1, typename T2> // cin>>pair<T1,T2>
istream &operator>>(istream &istream, pair<T1, T2> &p)
{
    return (istream >> p.first >> p.second);
}
template <typename T1, typename T2> // cout<<pair<T1,T2>
ostream &operator<<(ostream &ostream, const pair<T1, T2> &p)
{
    return (ostream << p.first << " " << p.second);
}
template <typename T> // cout<< vector<T>
ostream &operator<<(ostream &ostream, const vector<T> &c)
{
    for (auto &it : c)
        cout << it << " ";
    return ostream;
}
//-------------------------------------------------------------------------------------------------
// General Functions
// Power function
ll power(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll temp = power(a, b / 2);
    ll ans = temp * temp;
    if (b & 1)
        ans = ans * a;
    return ans;
}
// LCM of two numbers
ll __lcm(ll a, ll b)
{
    return (a * b) / __gcd(a, b);
}
// Mod power of (a,b)
ll modpow(ll a, ll b, ll m = MOD)
{
    if (a == 0 && b == 0)
        return 0; // Undefined case
    ll ans = 1;
    while (b > 0)
    {
        if (b % 2)
            ans = (ans * a) % m;
        a = (a * a) % m;
        b /= 2;
    }
    return ans;
}

// o(logn)
ll binaryMultiply(ll a, ll b)
{
    ll ans = 0;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = (ans + a) % M;
        }
        a = (a + a) % M;
        b >>= 1;
    }
    return ans;
}

ll poweritr(ll a, ll b)
{
    ll ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = binaryMultiply(ans, a) % M;
        }
        a = binaryMultiply(a, a) % M;
        b >>= 1;
    }
    return ans;
}

// o(log(n)^2)
//---------------------------------------------------------------------------------------------------
//  Main code
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //((a^b)%M)==((a%M)^b)

    cout << poweritr(2, 3) << endl;
    return 0;
}