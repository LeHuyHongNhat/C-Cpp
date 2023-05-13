#include<bits/stdc++.h>
using namespace std;
int n;
void solve(int i, string res) {
	int count = 0;
	if(i == n) {
		cout << res << " ";
		count++;
		return;
	}
	solve(i + 1, res + '6');
	solve(i + 1, res + '8');
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		cout << pow(2, n) << endl;
		solve(0, "");
		cout << endl;
	}
	return 0;
}

