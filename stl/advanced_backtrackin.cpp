//Leetcode problem

#include<bits/stdc++.h>

using namespace std;

#define ll long long

vector<string> v;
void generate(string  &s, int open, int close) {

	if (open == 0 && close == 0) {
		v.push_back(s);
		return ;
	}

	if (open > 0) {
		s.push_back('(');
		generate(s, open - 1, close);
		s.pop_back();
	}

	if (close > 0) {
		if (open < close) {
			s.push_back(')');
			generate(s, open, close - 1);
			s.pop_back();
		}
	}
}

int32_t main(void) {

	int n;
	cin >> n;
	string s = "";
	generate(s, 3, 3);
	for (auto val : v) {
		cout << val << endl;
	}
//((()))
// (()())
// (())()
// ()(())
// ()()()

	return 0;
}