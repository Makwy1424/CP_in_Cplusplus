#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 10;
int dp[N], k;
int func(ll n, vector<ll> &v)
{
    if (n == 0)
        return 0;
    if (dp[n] != -1)
        return dp[n];
    ll cost = INT32_MAX;
    for (ll j = n - 1; j >= n - k && j >= 0; j--)
        cost = min(cost, (func(j, v) + abs(v[n] - v[j])));

    return dp[n] = cost;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    memset(dp, -1, sizeof(dp));
    ll n;
    cin >> n >> k;
    vector<ll> v(n, 0);

    for (ll i = 0; i < n; i++)
        cin >> v[i];

    func(n - 1, v);
    cout << dp[n - 1] << endl;
    return 0;
}