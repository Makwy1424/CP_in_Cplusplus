#include<bits/stdc++.h>

using namespace std;

#define ll long long

vector<vector<ll>> subsets;
void generate(vector<ll> &subset, int i, vector<ll> &nums) {

	if (i == nums.size()) {
		subsets.push_back(subset);
		return;
	}

	//ith element not in the subset
	generate(subset, i + 1, nums);

	//ith element in subset
	subset.push_back(nums[i]);
	generate(subset, i + 1, nums);
	subset.pop_back();
}

int32_t main() {

	int n;
	cin >> n;
	vector<ll> nums(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}

	vector<ll> empty;
	generate(empty, 0, nums);
	for (auto subset : subsets) {
		for (auto ele : subset) {
			cout << ele << " ";
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}