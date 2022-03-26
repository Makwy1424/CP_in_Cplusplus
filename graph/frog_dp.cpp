#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 10;
vector<ll> h;
int dp[N];

int func(int n)
{
    ll cost = INT32_MAX;
    if (dp[n] != -1)
        return dp[n];
    if (n == 0)
        return dp[0] = 0;
    cost = min(cost, (func(n - 1) + abs(h[n] - h[n - 1])));
    if (n > 1)
        cost = min(cost, (func(n - 2) + abs(h[n - 2] - h[n])));
    return dp[n] = cost;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    memset(dp, -1, sizeof(dp));
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        h.push_back(k);
    }
    func(n - 1);
    cout << dp[n - 1] << endl;
    return 0;
}