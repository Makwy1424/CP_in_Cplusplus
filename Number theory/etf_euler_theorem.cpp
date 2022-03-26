// Large exponentiation with ETF and Euler's Theorem.

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll binaryMultiply(ll a, ll b, ll M = 1e9 + 7)
{
    ll ans = 0;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = (ans + a) % M;
        }
        a = (a + a) % M;
        b >>= 1;
    }
    return ans;
}

ll binaryExp(ll a, ll b, ll M = 1e9 + 7)
{
    ll ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = binaryMultiply(ans, a) % M;
        }
        a = binaryMultiply(a, a) % M;
        b >>= 1;
    }
    return ans;
}

int main()
{

    ll a = 10, b = 20, c = 16;
    ll M = 1e9 + 7;
    cout << binaryExp(a, binaryExp(b, c, M - 1), M); // M is prime.
    return 0;
}