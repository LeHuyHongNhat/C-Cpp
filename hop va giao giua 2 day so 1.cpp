#include<iostream>
#include<algorithm>
using namespace std;

const int N = 1e5 + 5;
int a[N], b[N], c[N];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < m; i++) {
			cin >> b[i];
		}
		sort(a, a + n);
		sort(b, b + m);
		// intersection
		int i = 0, j = 0, k = 0;
		while (i < n && j < m) {
			if (a[i] < b[j]) {
				cout << a[i++] << " ";
			} else if (b[j] < a[i]) {
				cout << b[j++] << " ";
			} else {
				cout << a[i++] << " ";
				j++;
			}
		}
		while (i < n) {
			cout << a[i++] << " ";
		}
		while (j < m) {
			cout << b[j++] << " ";
		}
		cout << endl;
// union
		i = 0, j = 0;
		while (i < n && j < m) {
			if (a[i] < b[j]) {
				i++;
			} else if (b[j] < a[i]) {
				j++;
			} else {
				c[k++] = a[i++];
				j++;
			}
		}

		for (int i = 0; i < k; i++) {
			cout << c[i] << " ";
		}
		cout << endl;
	}

	return 0;
}

