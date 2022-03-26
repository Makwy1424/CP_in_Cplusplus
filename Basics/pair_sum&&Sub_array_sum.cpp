// Two pointer tech for pair sum

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main() {

// 	ll n;;
// 	cin >> n;
// 	vector<ll> v(n);
// 	for (ll i = 0; i < n; i++) {
// 		cin >> v[i];
// 	}

// 	ll target;
// 	cin >> target;

// 	sort(v.begin(), v.end());
// 	ll hi = n - 1, lo = 0;
// 	while (lo < hi) {
// 		cout << "hi = " << hi << "lo = " << lo << endl;
// 		if ((v[hi] + v[lo]) == target) {
// 			cout << hi + 1 << " " << lo + 1 << endl;
// 			return 0;
// 		}
// 		else if ((v[hi] + v[lo]) < target) {
// 			lo++;
// 		}
// 		else {
// 			hi--;
// 		}

// 	}

// 	cout << "NO pair" << endl;

// 	return 0;
// }

// Maximum subarray sum(Kadenes Algo)

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main() {

// 	ll n;
// 	cin >> n;
// 	vector<ll> v(n);
// 	for (ll i = 0; i < n; i++) {
// 		cin >> v[i];
// 	}

// 	ll maxSum = 0;
// 	ll current_sum = 0;
// 	for (ll i = 0; i < n; i++) {
// 		current_sum += v[i];
// 		if (current_sum < 0) {
// 			current_sum = 0;
// 		}
// 		maxSum = max(maxSum, current_sum);
// 	}
// 	cout << maxSum << endl;

// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll kedane(vector<ll> &v)
{
    ll n = v.size();
    ll maxSum = 0;
    ll currentSum = 0;
    for (ll i = 0; i < n; i++)
    {
        currentSum += v[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        maxSum = max(currentSum, maxSum);
    }
    return maxSum;
}

int main()
{

    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // max sub array sum= total sum-non_contributing sum.

    ll maxSum = 0, Total_sum = 0, Non_co = 0;
    maxSum = max(maxSum, kedane(v));
    for (ll i = 0; i < n; i++)
    {
        Total_sum += v[i];
        v[i] = -1 * v[i];
    }

    maxSum = Total_sum + kedane(v);
    cout << maxSum << endl;

    return 0;
}