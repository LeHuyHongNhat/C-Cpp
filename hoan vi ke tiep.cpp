#include <iostream>
#include <algorithm>

using namespace std;

bool next_permutation(int *a, int n) {
	int i = n - 2;
	while (i >= 0 && a[i] >= a[i + 1]) {
		i--;
	}
	if (i == -1) {
		return false;
	}
	int j = n - 1;
	while (a[j] <= a[i]) {
		j--;
	}
	swap(a[i], a[j]);
	reverse(a + i + 1, a + n);
	return true;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int k; 
		cin >> k;
		int a[k];
		for(int i = 0; i < k; i++){
			cin >> a[i];
		}
		int n = sizeof(a) / sizeof(a[0]);
		next_permutation(a, n);
		for (int i = 0; i < k; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}

