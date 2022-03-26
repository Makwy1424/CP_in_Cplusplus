#include <bits/stdc++.h>
using namespace std;
#define ll long long

string printBinary(int n)
{

    string result;
    while (n != 0)
    {
        if (n & 1)
            result.push_back('1');
        else
            result.push_back('0');
        n = n >> 1;
    }
    reverse(result.begin(), result.end());
    return result;
}

int main()
{

    ll workers;
    cin >> workers;
    vector<ll> keteDina(workers);
    vector<ll> kauDina(workers, 0);
    for (ll i = 0; i < workers; i++)
    {
        cin >> keteDina[i];
        for (ll j = 0; j < keteDina[i]; j++)
        {
            ll k;
            cin >> k;
            kauDina[i] = kauDina[i] | (1 << k - 1);
        }
    }

    ll max_day_work = 0;
    ll first = 0, second = 0;

    for (ll i = 0; i < workers - 1; i++)
    {
        for (ll j = i + 1; j < workers; j++)
        {
            ll temp = __builtin_popcount(kauDina[i] & kauDina[j]);
            if (temp > max_day_work)
            {
                max_day_work = temp;
                first = i + 1;
                second = j + 1;
            }
        }
    }
    cout << "The 1 and 2 persons are: " << first << " " << second << endl;
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