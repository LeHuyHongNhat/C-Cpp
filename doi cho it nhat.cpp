#include <bits/stdc++.h>
using namespace std;

int a[1001],b[1001],c[1001];

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b, b + n);
		for(int i = 0; i < n; i++) {
			c[i] = lower_bound(b, b + n, a[i]) - b;
		}
		int ans = 0;
		for(int i = 0; i < n ; i++) {
			if(c[i] != i) {
				int t = c[i];
				swap (a[i], a[t]);
				swap(c[i], c[t]);
				ans++;
			}
		}
		cout << ans <<endl;
	}
	return 0;
}

