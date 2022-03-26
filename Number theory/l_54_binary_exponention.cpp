#include <bits/stdc++.h>
using namespace std;
#define ll long long
// Binary exponentiation
// Recursive way of approach
ll power(ll a, ll b)
{
    if (b == 0)
    {
        return 1;
    }
    ll temp = power(a, b / 2);
    ll ans = temp * temp;
    if (b & 1)
        ans *= a;
    return ans;
}

// Iterative way of approach

ll poweritr(ll a, ll b)
{
    ll ans = 1;
    while (b > 0)
    {
        if (b & 1)
            ans *= a;

        a *= a;
        b >>= 1;
    }
    return ans;
}

int main()
{

    cout << power(2, 3) << endl;
    cout << poweritr(2, 3) << endl;

    return 0;
}