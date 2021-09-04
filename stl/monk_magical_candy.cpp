// In the name of God.
// We're nothing and you're everything.
//Ya Smruti!
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define in(n) cin >> n;
#define in2(n, m) cin >> n >> m
#define fo(i,n) for(ll i=0;i<n;i++)
int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	ll T;
	in(T);
	while (T--) {
		ll n, k;
		in2(n, k);
		multiset<ll> m;
		fo(i, n) {
			ll n;
			in(n);
			m.insert(n);
		}
		ll ans = 0;
		fo(i, k) {
			auto it = (--m.end());
			ll candy = (*it);
			ans += (*it);
			m.erase(it);
			m.insert(candy / 2);
		}
		cout << ans << endl;

	}



	return 0;
}