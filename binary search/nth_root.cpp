#include <bits/stdc++.h>
using namespace std;
#define ll long long
// Program to find the square root using Binary search.
double eps = 1e-6;

ll multiply(int n, int i)
{
    ll p = 1;
    for (ll j = 0; j < i; j++)
        p *= n;

    return p;
}
int main()
{
    double n;
    cout << "Enter the square root: ";
    cin >> n;
    int x;
    cout << "Nth value for: ";
    cin >> x;
    double mid, hi = n, lo = 1;

    while (hi - lo > eps)
    {
        mid = (hi + lo) / 2;

        if (multiply(mid, x) < n)
            lo = mid;
        else
            hi = mid;
    }

    if (lo * lo >= n)
    {
        cout << "The square root of the number: " << setprecision(10) << lo << endl;
        return 0;
    }
    if (hi * hi >= n)
    {
        cout << "The square root of the number: " << setprecision(10) << hi << endl;
        return 0;
    }
    return 0;
}