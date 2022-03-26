#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Program to implement upper bound(Always the upper index)
//  and lower bound(If the element is present then output
//  its index and if not present its next index)

int upper_bound(vector<ll> &v, int x)
{
    ll hi = v.size() - 1, lo = 0;

    while (hi - lo > 1)
    {
        ll mid = (hi + lo) / 2;

        if (x <= v[mid])
            hi = mid;
        else
            lo = mid + 1;
    }
    if (v[lo] > x)
        return v[lo];
    if (v[hi] > x)
        return v[hi];
    return -1;
}

int lower_bound(vector<ll> &v, int x)
{
    ll hi = v.size() - 1, lo = 0;

    while (hi - lo > 1)
    {
        ll mid = (hi + lo) / 2;

        if (x <= v[mid])
            hi = mid;
        else
            lo = mid + 1;
    }
    if (v[lo] >= x)
        return v[lo];
    if (v[hi] >= x)
        return v[hi];
    return -1;
}

int main()
{

    ll n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    // for (ll i = 0; i < n; i++)
    // {
    //     cout << v[i];
    // }
    ll element;
    cout << "Enter the number for which you want to find the upper bound: ";
    cin >> element;
    int i = upper_bound(v, element);
    cout << "the upper bound of the " << element << " is: " << i << endl;
    i = lower_bound(v, element);
    cout << "the Lower bound of the " << element << " is: " << i << endl;
    return 0;
}