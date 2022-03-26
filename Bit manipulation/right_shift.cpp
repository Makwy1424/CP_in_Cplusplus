//program to rigit sgift the binary to right once.

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
    int n;
    in(n);
    while (n--)
    {
        int t;
        in(t);
        t = t >> 1;
        cout << t << endl;
    }

    return 0;
}

//1011(11)=101(5)
//1101(13)=110(6)

//code == 2
//program to shift a given number to right by a given number of times.

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
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n >> i;
        cout << "\n------" << (n >> i) << endl;
    }

    return 0;
}

//n>>i=n/(2^i)