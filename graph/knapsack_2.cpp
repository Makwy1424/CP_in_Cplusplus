#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> weight(105, 0), value(105, 0);
ll dp[105][100005];
ll func(ll n, ll w)
{ // returns the max. value

    if (w == 0 || n < 0)
        return 0;
    if (dp[n][w] != -1)
        return dp[n][w];
    ll ans = 0;

    // Not consider
    ans = max(ans, func(n - 1, w)); // w=15,v=0

    // consider
    if ((w - weight[n]) >= 0)
        ans = max(ans, func(n - 1, w - weight[n]) + value[n]); // w=8,v=2

    return dp[n][w] = ans;
}

int main()
{

    memset(dp, -1, sizeof(dp));
    ll n, w;
    cin >> n >> w;
    for (ll i = 0; i < n; i++)
        cin >> weight[i] >> value[i];

    ll ans = func(n - 1, w);
    cout << ans << endl;
    return 0;
}
