#include<bits/stdc++.h>
using namespace std;

int n, k;
vector<int> res;

void backtrack(int i) {
	if (res.size() == k) {
		for (int j = 0; j < res.size(); j++)
			cout << res[j] << " ";
		cout << endl;
		return;
	}
	for (int j = i; j >= 1; j--) {
		res.push_back(j);
		backtrack(j - 1);
		res.pop_back();
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		backtrack(n);
	}
	return 0;
}

