#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<string> v;
void generate_parenthesis(string str, ll i, ll ct_open, ll ct_close)
{
    if (ct_open == i && ct_close == i)
    {
        v.push_back(str);
        return;
    }

    if (ct_open < i)
    {
        str.push_back('(');
        generate_parenthesis(str, i, ct_open + 1, ct_close);
        str.pop_back();
    }

    if (ct_close < i && ct_open > ct_close)
    {
        str.push_back(')');
        generate_parenthesis(str, i, ct_open, ct_close + 1);
        str.pop_back();
    }
}

int main()
{

    ll n;
    cin >> n;

    generate_parenthesis({}, n, 0, 0);

    for (auto &val : v)
    {
        cout << val << endl;
    }
    return 0;
}