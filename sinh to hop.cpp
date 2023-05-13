#include<iostream>

using namespace std;

int k,n,x[15];

void init() {
	cin >> n >> k;
	for(int i = 1; i <= k; i++) {
		x[i] = i;
	}
}

void display() {
	for(int i = 1; i <= k; i++) {
		cout<< x[i];
	}
	cout<< " ";
}

bool finalCheck() {
	for(int i = 1; i <= k; i++) {
		if(x[i] != n - k + i)
			return false;
	}
	return true;
}

void genNext() {
	int i = k; // i = 3
	while(x[i] == n - k + i) { // kiem tra cau hinh x[i] da toi gioi han hay chua (tu phai sang trai)
		i--; // neu da toi thi i-- kiem tra cau hinh tiep theo
	}
	x[i] += 1; // cau hinh x[i] chua max -> + them 1
	for(int j = i + 1; j <= k; j++) { // dam bao x[i+1] > x[i] 1 don vi
		x[j] = x[j-1] + 1;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		init();
		display();
		while(!finalCheck()) {
			genNext();
			display();
		}
		cout << endl;
	}
	return 0;
}
