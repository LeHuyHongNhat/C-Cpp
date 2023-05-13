#include <bits/stdc++.h>

using namespace std;

int T, n;
int a[15];

bool prev_permutation() {
	int i = n - 2;
	while (i >= 0 && a[i] <= a[i + 1]) {
		i--;
	}
	if (i == -1) {
		return false;
	}
	int j = n - 1;
	while (a[j] >= a[i]) {
		j--;
	}
	swap(a[i], a[j]);
	reverse(a + i + 1, a + n);
	return true;
}

int main() {
	cin >> T;
	while (T--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			a[i] = n - i;
		}
		do {
			for (int i = 0; i < n; i++) {
				cout << a[i];
			}
			cout << ",";
		} while (prev_permutation());
		cout << endl;
	}
	return 0;
}

