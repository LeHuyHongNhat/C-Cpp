#include<bits/stdc++.h>

using namespace std;

int main() {
	int n, x;
	cin >> n >> x;
	int a[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	auto it = lower_bound(a, a + n, x);
	if(it == (a + n))
		cout << "Khong co phan tu nao trong mang >= " << x << endl;
	cout << "Gia tri "<< *it << " o vi tri " << it - a << endl;
}

