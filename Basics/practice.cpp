#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<ll>> all_subsets;

void generate_subsets(vector<ll> &subset, int i, vector<ll> &v)
{
    if (i == v.size())
    {
        all_subsets.push_back(subset);
        return;
    }
    // Excluding the ith element
    generate_subsets(subset, i + 1, v);

    // Including the ith element
    subset.push_back(v[i]);
    generate_subsets(subset, i + 1, v);
    subset.pop_back();
}

int main()
{

    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;

    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];

    vector<ll> subset;
    int i = 0;

    // Generate all the subsets
    generate_subsets(subset, i, v);

    // Printing all the subsets
    cout << "The number of subsets is: " << all_subsets.size() << endl;
    for (ll i = 0; i < all_subsets.size(); i++)
    {
        for (ll j = 0; j < all_subsets[i].size(); j++)
        {
            cout << all_subsets[i][j] << " ";
        }
        cout << endl;
    }

    // End of the program
    return 0;
}