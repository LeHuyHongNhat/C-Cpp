#include<bits/stdc++.h>

using namespace std;

int first_pos(int a[], int n, int x) {
	int res = -1;
	int l = 0, r = n - 1;
	while(l <= r) {
		int m = (l + r) / 2;
		if(a[m] == x) {
			res = m;
			r = m - 1;
		} else if(a[m] < x) {
			l = m + 1;
		} else
			r = m + 1;
	}
	return res;
}

int last_pos(int a[],int n,int x) {
	int res = -1;
	int l = 0, r = n - 1;
	while(l <= r) {
		int m = (l + r) / 2;
		if(a[m] == x) {
			res = m;
			l = m + 1;
		} else if(a[m] < x)
			l = m + 1;
		else r = m - 1;
	}
	return res;
}

int main() {
	int  n, x;
	cin >> n >> x;
	int a[n];
	for (int &x : a)
		cin >> x;
	cout << first_pos(a, n , x) << " " << last_pos(a, n, x) << endl;
	int l = first_pos(a, n , x), r = last_pos(a, n, x);
	if(l != -1)
		cout << "So lan xuat hien " << r - l + 1;
	else cout << "0";
}
