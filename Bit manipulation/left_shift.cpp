//program to shiftthe binary to 1 left.
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define in(n) cin >> n;
#define in2(n, m) cin >> n >> m
#define fo(i, n) for (ll i = 0; i < n; i++)
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    in(t);
    while (t > 0)
    {
        int n;
        cin >> n;
        n = n << 1;
        cout << "\n--------" << n;
        t--;
    }
    return 0;
}

//1011 ==11 =>left shift=> 10110=22.
//9=1001=>10010=>18

// code -2
//This program for shifting of given binary number to a given times,

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define in(n) cin >> n;
#define in2(n, m) cin >> n >> m
#define fo(i, n) for (ll i = 0; i < n; i++)
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    in(t);
    while (t--)
    {
        ll n, i;
        in2(n, i);
        cout << "\n--------" << (n << i);
    }

    return 0;
}
//1100(12)==1100000(96)
//n<<i==n.2^i