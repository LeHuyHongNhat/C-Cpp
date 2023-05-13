#include <bits/stdc++.h>
using namespace std;

void generateAllBinaryStrings(int n, string str, int len) {
	if (len == n) {
		cout << str << endl;
		return;
	}
	generateAllBinaryStrings(n, str + '0', len + 2);
	generateAllBinaryStrings(n, str + '1', len + 2);
}

int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << "All binary strings of even length " << n << endl;
		generateAllBinaryStrings(n, "", 0);
	}
	return 0;
}
