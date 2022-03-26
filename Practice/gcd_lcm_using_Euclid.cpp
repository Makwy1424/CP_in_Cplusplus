#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll GCD(ll a, ll b)
{

    if (b == 0)
        return a;
    else
        return GCD(b, a % b);
}

ll power(ll n, ll p)
{
    if (p == 0)
        return 1;
    ll ans = power(n, p / 2);
    ans *= ans;
    if (p & 1)
        ans *= n;
    return ans;
}

ll powerIterative(ll n, ll p)
{
    ll ans = 0;
    while (p != 0)
    {
        if (p & 1)
        {
            ans += n;
        }
        n <<= 1;
        p = p >> 1;
    }
    return ans;
}

int main()
{

    ll a, b;
    cin >> a >> b;
    cout << __gcd(a, b) << endl;
    cout << "GCD of two numbers: " << GCD(a, b) << endl;

    cout << "2^5 = " << powerIterative(2, 5);
    return 0;
}