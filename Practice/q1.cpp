#include <bits/stdc++.h>
using namespace std;
#define ll long long

string dtob(ll n)
{
    string a;
    while (n != 0)
    {
        if (n & 1)
            a.push_back('1');
        else
            a.push_back('0');

        n = n >> 1;
    }
    reverse(a.begin(), a.end());
    return a;
}

ll setbit(ll n, ll pos)
{
    return n | (1 << pos - 1);
}

ll toggle(ll n, ll pos)
{
    return n ^ (1 << pos - 1);
}

bool isSet(ll n, ll pos)
{
    if (n & (1 << pos - 1))
        return true;
    else
        return false;
}

ll unset(ll n, ll pos)
{

    return n & (~(1 << pos - 1));
}

ll no_of_one(int n)
{
    ll num = 0;
    while (n != 0)
    {
        if (n & 1)
            num++;
        n = n >> 1;
    }
    return num;
}

int main()
{
    ll n, pos;
    cin >> n;
    string c = dtob(n);
    cout << "The string is: " << c << endl;

    // cout << "Enter the pos at which u want to setr the bit: " << endl;
    // cin >> pos;
    // n = setbit(n, pos);
    // cout << "The value of n is: " << dtob(n) << endl;

    // cout << "Enter the toggle position: " << endl;
    cin >> pos;
    // n = toggle(n, pos);
    // cout << "The n after toggling: " << dtob(n) << endl;

    // if (isSet(n, pos))
    //     cout << "Yes, Set at the position." << endl;
    // else
    //     cout << "Not set at the position." << endl;

    // 2147483647 = INT_MAX

    // int a = 1000LL - 1;
    // cout << a << endl;

    // cout << dtob(unset(n, pos)) << endl;

    // cout << no_of_one(n) << endl;

    // cout << __builtin_popcount(n) << endl;
    // cout << __builtin_popcountll(1LL << 38) << endl;

    
    return 0;
}