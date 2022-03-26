#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll M = 1e5 + 10;
ll places, cows;
ll v[M];

bool isCowPlaced(ll diff)
{

    ll last_position = -1;
    ll ct = cows;

    for (ll i = 0; i < places; i++)
    {
        if (v[i] - last_position >= diff || last_position == -1)
        {
            last_position = v[i];
            ct--;
        }
        if (ct == 0)
            break;
    }
    return ct == 0;
}
int main()
{

#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

#endif

    ll t;
    cin >> t;
    while (t--)
    {
        cin >> places >> cows;
        for (ll i = 0; i < places; i++)
        {
            cin >> v[i];
        }
        sort(v, v + places);

        ll hi = 1e9, lo = 0;

        while (hi - lo > 1)
        {
            ll mid = (hi + lo) / 2;
            if (isCowPlaced(mid))
            {
                lo = mid;
            }
            else
            {
                hi = mid - 1;
            }
        }
        if (isCowPlaced(hi))
        {
            cout << hi << endl;
        }
        else
        {
            cout << lo << endl;
        }
    }
    return 0;
}