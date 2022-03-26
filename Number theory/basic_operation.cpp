#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll ct = 0;
void show_binary(int n)
{
    if (n == 0)
    {
        return;
    }

    show_binary(n >> 1);
    (n & 1) != 0 ? ct++ : ct;
}
int main()
{

    ll n;
    cin >> n;

    show_binary(n);
    cout << "The number of the bits : " << ct << endl;
    return 0;
}