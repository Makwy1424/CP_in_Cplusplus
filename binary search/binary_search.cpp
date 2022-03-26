#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ll size;
    cout << "Enter the size of the vector: ";
    cin >> size;
    vector<ll> v(size);
    for (ll i = 0; i < size; i++)
    {
        cin >> v[i];
    }
    ll hi = size - 1, lo = 0;
    ll mid = 0, to_find;
    cout << "Enter the number to find int vector: ";
    cin >> to_find;
    while (hi - lo > 1)
    {

        mid = (hi + lo) / 2;
        if (v[mid] < to_find)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }
    if (v[hi] == to_find)
    {
        cout << "The index of the number is: " << hi + 1 << endl;
    }
    else if (v[lo] == to_find)
    {
        cout << "The index of the number is: " << lo + 1 << endl;
    }
    else
    {
        cout << "The element is not in the vector \n";
    }
    return 0;
}
