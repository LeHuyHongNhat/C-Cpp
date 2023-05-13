#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

const int MAX_N = 100000;

int n, x;
int A[MAX_N];

bool cmp(int a, int b) {
	return abs(x - a) < abs(x - b);
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> x;
		for(int i = 0; i < n; i++){
			cin >> A[i];
		}
		sort(A, A + n, cmp);
		for(int i = 0; i < n; i++){
			cout << A[i] << " ";
		}
//		cout << endl; 
	}
}

