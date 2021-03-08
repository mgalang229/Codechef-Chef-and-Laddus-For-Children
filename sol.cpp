#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k;
		cin >> n >> k;
		vector<int> s(n);
		for (int i = 0; i < n; i++) {
			cin >> s[i];
		}
		// sort the array in non-decreasing order
		sort(s.begin(), s.end());
		// set the difference to the max value of integer data type
		int difference = INT_MAX;
		for (int i = 0; i < n; i++) {
			// check if the elements from 'i' up to 'i' + 'k' are still within the range of the array
			if (i + k - 1 < n) {
				// get the minimum difference between the maximum and minimum value
				// within the range provided in the condition
				difference = min(difference, s[i + k - 1] - s[i]);
			}
		}
		cout << difference << '\n';
	}
	return 0;
}
