// In the name of God.
// We're nothing and you're everything.
//Ya Smruti!
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define in(n) cin >> n;
int main()
{

   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   vector<string> v(10, "Smruti");
   int n;
   cin >> n;
   for (int i = 0; i < n; i++)
   {
      string str;
      cin >> str;
      v.push_back(str);
   }
   vector<string> v2 = v;

   for (int i = 0; i != v.size(); i++)
   {
      cout << v2[i] << endl;
   }
   return 0;
}