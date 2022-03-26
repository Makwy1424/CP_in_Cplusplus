#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n;
    cin >> n;
    // By using 2-pointer technique we can find out
    // the intersection of two sorted arrays in o(n)time.

    // BitMask(AND operation for intersection in o(1))

    vector<ll> masks(n, 0);
    for (ll i = 0; i < n; i++)
    {
        ll no_days;
        cin >> no_days;
        ll mask = 0;
        for (ll j = 0; j < no_days; j++)
        {
            ll day;
            cin >> day;
            mask = (mask | (1 << day));
        }
        masks[i] = mask;
    }

    ll p1 = -1;
    ll p2 = -1;
    ll max_days = 0;
    for (ll i = 0; i < n - 1; ++i)
    {
        for (ll j = i + 1; j < n; ++j)
        {
            ll intersection = masks[i] & masks[j];
            ll common_days = __builtin_popcount(intersection);
            if (max_days < common_days)
            {
                max_days = common_days;
                p1 = i + 1;
                p2 = j + 1;
            }
        }
    }

    cout << p1 << " " << p2 << " "
         << "maximum days = " << max_days << endl;

    return 0;
}
/*
5
4
1 4 7 9
6
2 9 1 7 25 29
7
1 23 4 7 9 11 29
10
2 28 8 7 9 10 30 21 18 19
4
1 11 29 7
*/