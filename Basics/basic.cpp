// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string sdf;
//     for (int i = 0; i < sdf.size(); i++)
//     {
//         cin >> sdf[i];
//     }
//     cout << sdf;
//     return 0;
// }

// find a sequence of no in an array;

//Binary exponention;
//a^b calculation
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll binaryExp(ll m, ll n)
{
    if (n == 0)
        return 1;
    ll temp = binaryExp(m, n / 2);
    ll result = temp * temp;
    if (n % 2 == 1)
        result = temp * temp * m;
    return result;
}
ll power(ll m, ll n)
{
    ll result = 1;
    while (n)
    {
        if (n % 2)
            result *= m;
        m *= m;
        n = n / 2;
    }
    return result;
}

int main()
{
    ll n, m;
    cin >> m >> n;
    cout << binaryExp(m, n) << endl;
    ;
    cout << power(m, n);

    return 0;
}
