#include<iostream>
#include<algorithm>

using namespace std;

int n;
int a[20];

void Swap(int &x, int &y) { // ham doi vi tri
	int res;
	res=x;
	x=y;
	y=res;
}

void init() { // cau hinh ban dau
	cin >> n;
	for(int i = 1; i <= n; i++) {
		a[i] = i;
	}
}

void display() { // in ra man hinh
	for(int i = 1; i <= n; i++) {
		cout<<a[i];
	}
	cout << " ";
}

bool finalCheck() { // kiem tra cau hinh cuoi cung
	for(int i = 1; i <= n; i++) {
		if(a[i] != n-i+1)
			return false;
	}
	return true;
}

void genNext() { // cau hinh tiep theo
	int i = n;
	while( a[i] < a[i - 1]) // kiem tra vi tri can dao nguoc
		i--;
	for(int j = n; j >= i; j--) { // dao nguoc voi so be nhat (o cau hinh cuoi cung so be nhat luon nam o phia cuoi cua day)
		if(a[j] > a[i-1]) { // vd: 24(3)1 -> (3)421
			Swap(a[j],a[i-1]);
			break;
		}
	}
	for(int j = i; j <= n-1; j++) { // xap xep trat tu -> dua ve cau hinh be nhat
		for(int k = j + 1; k <= n; k++) { // vd: (3)421 -> 3(1)2(4)
			if(a[j] > a[k]) {
				Swap(a[j],a[k]);
				reserve(a + i + 1, a + n);
			}
		}
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
}
