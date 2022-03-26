// In the name of God.
// We're nothing and you're everything.
//Ya Smruti!

#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define ll long long
#define pb push_back
#define mp make_pair
#define in(n) cin >> n;
#define in2(n, m) cin >> n >> m
#define fo(i, n) for (ll i = 0; i < n; i++)

vector<int> NGE(vector<int> given_num)
{
    stack<int> st;
    vector<int> index(given_num.size(), 0);

    for (int i = 0; i < given_num.size(); i++)
    {
        while (!st.empty() && given_num[i] > given_num[st.top()])
        {
            index[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        index[st.top()] = -1;
        st.pop();
    }
    for (int i = 0; i < given_num.size(); i++)
    {
        if (index[i] != -1)
        {
            index[i] = given_num[index[i]];
        }
    }
    return index;
}

vector<int> nextGreaterElement(vector<int> &num1, vector<int> &num2)
{
    vector<int> NGE_OF_num2 = NGE(num2);

    vector<int> ans;
    for (int i = 0; i < num1.size(); i++)
    {
        auto it = find(num2.begin(), num2.end(), num1[i]);
        int ind = it - num2.begin();
        cout << NGE_OF_num2[ind] << " ";
    }

    return ans;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> f, g;
    fo(i, 3)
    {
        int n;
        cin >> n;
        f.pb(n);
    }
    fo(i, 4)
    {
        int m;
        cin >> m;
        g.pb(m);
    }
    vector<int> ans = nextGreaterElement(f, g);

    return 0;
}