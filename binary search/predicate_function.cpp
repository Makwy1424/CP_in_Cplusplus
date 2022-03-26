#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Eko-eko (Binary search-SPOJ)
// prediacate function gives a array of true/false statement.
// ex;-T T T T T F F F F F
// ex-2:-F F F F F F T T T

// As predicate function is a monotonic function so we can apply
// Binay search.

const ll M = 1e6 + 10;
ll n, m;
vector<ll> v(M);

bool isSufficient(ll mid)
{
    ll wood = 0;
    for (ll i = 0; i < n; i++)
    {
        if (v[i] >= mid)
        {
            wood += (v[i] - mid);
        }
    }

    return wood >= m;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    cin >> n >> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll lo = 0, hi = *max_element(v.begin(), v.end());

    while (hi - lo > 1)
    {
        ll mid = (hi + lo) / 2;

        if (isSufficient(mid))
        {
            lo = mid;
        }
        else
        {
            hi = mid - 1;
        }
    }
    if (isSufficient(hi))
    {
        cout << hi << endl;
    }
    else
    {
        cout << lo << endl;
    }
    return 0;
}
