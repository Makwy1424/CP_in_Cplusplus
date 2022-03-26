#include <bits/stdc++.h>
using namespace std;
#define ll long long

/*
1 2() 3() 4 5() 6 7() 8 9 10
11() 12 13() 14 15 16 17() 18 19() 20
21 22 23() 24 25 26 27 28 29() 30
*/

const ll N = 1e7 + 10;

vector<bool> isPrime(N, 1);

void sieve()
{
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i < N; i++)
    {
        if (isPrime[i] == true)
        {
            for (ll j = i * i; j < N; j += i)
                isPrime[j] = false;
        }
    }
}

int main()
{
    sieve();
    ll n;
    cin >> n;

    if (isPrime[n])
        cout << "Prime number" << endl;
    else
        cout << "Not prime number" << endl;
    return 0;
}