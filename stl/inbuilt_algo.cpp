// In the name of God.
// We're nothing and you're everything.
//Ya Smruti!
//-------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;
//-------------------------------------------------------------------------------------------------
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
#define size(arr) sizeof(arr) / sizeof(arr[0]);
#define fo(i, a, n) for (ll i = a; i < n; i++)
//-------------------------------------------------------------------------------------------------
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int min = *min_element(v.begin(), v.end());
    cout << min << endl;
    int max = *max_element(v.begin(), v.end());
    cout << max << endl;
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << sum << endl;
    int ct = count(v.begin(), v.end(), 2);
    cout << ct << endl;

    int element = *find(v.begin(), v.end(), 2);
    cout << element << endl;

    reverse(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}