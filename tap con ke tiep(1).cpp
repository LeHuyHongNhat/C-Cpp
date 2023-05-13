#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int a[k];
		for(int i = 1; i <= k; i++)
			cin >> a[i];
		int i = k;
		while(a[i] == n - k + i)
			i--;
		if(i == 0) {
			for(int j = 1; j <= k; j++)
				cout << j << " ";
		} else {
			a[i] += 1;
			for(int j = i + 1; j <= k; j++)
				a[j] = a[j - 1] + 1;
			for(int s = 1; s <= k; s++)
				cout << a[s] << " ";
		}
		cout << endl;
	}
}

