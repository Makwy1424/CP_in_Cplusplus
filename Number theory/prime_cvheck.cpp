#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(int n)
{
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;

    return true;
}

vector<int> prime_factors(ll n)
{
    // o(sqrt(n))
    vector<int> temp;
    for (ll i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            n /= i;
            temp.push_back(i);
            // cout << i << " ";
        }
    }
    if (n > 1)
    {
        temp.push_back(n);
    }
    return temp;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n;
    cin >> n;
    cout << n << endl;
    if (isPrime(n))
    {
        cout << "N is a prime number" << endl;
    }
    else
    {
        cout << "N is not a prime number" << endl;
    }
    vector<int> fac = prime_factors(n);
    cout << "size = " << fac.size() << endl;
    for (auto &val : fac)
    {
        cout << val << " ";
    }
    return 0;
}