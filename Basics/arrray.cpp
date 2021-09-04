// In the name of God.
// We're nothing and you're everything.
//Ya Smruti!
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string str;
    getline(cin, str);
    for (int i = 0; i < str.size(); i++)
    {
        string str2;
        while (str[i] != ' ')
        {
            str2.push_back(toupper(str[i]));
            i++;
        }
        cout << str2 << endl;
    }

#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
#endif
    return 0;
}