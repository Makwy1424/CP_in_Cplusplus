#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 1e4 + 10;

vector<ll> isPrime(N, 1);
vector<ll> lp(N, 0), hp(N, 0);

void sieve()
{
    isPrime[0] = isPrime[1] = false;

    for (ll i = 2; i < N; i++)
    {
        if (isPrime[i])
        {
            lp[i] = hp[i] = i;
            for (ll j = i * 2; j < N; j += i)
            {
                isPrime[j] = false;
                hp[j] = i;
                if (lp[j] == 0)
                    lp[j] = i;
            }
        }
    }
}

map<int, int> primeFactors(ll num)
{
    map<int, int> temp;
    while (num > 1)
    {
        ll prime_factor = hp[num];
        while (num % prime_factor == 0)
        {
            num /= prime_factor;
            temp[prime_factor]++;
        }
    }
    return temp;
}

vector<int> Divisors[N];

void Generate_divisors()
{
    for (ll i = 1; i < N; i++)
    {
        for (ll j = i; j < N; j += i)
            Divisors[j].push_back(i);
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    sieve();
    ll n;
    cin >> n;

    // if (isPrime[n])
    //     cout << "This is a prime number" << endl;
    // else
    //     cout << "This is not a prime Number" << endl;

    // map<int, int> v = primeFactors(n);
    // for (auto &val : v)
    //     cout << val.first << " " << val.second << endl;

    Generate_divisors();
    for (auto &val : Divisors[n])
    {
        cout << val << " ";
    }
    return 0;
}
