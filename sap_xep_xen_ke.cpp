#include<iostream>
#include<algorithm>

using namespace std;

const int MAX_N = 1000;
int n, a[MAX_N];

void init(){
	cin >> n;
	for (int i = 0; i <= n - 1; i++){
		cin >> a[i];
	}
}

void sortElements(int A[], int n){
	sort(a, a + n);
	int i = 0, j = n - 1;
	while (i < j) {
		cout << a[j--] << " " << A[i++] << " ";
	}
	if (n % 2 != 0) 
		cout << a[i];
}

int main(){
	int t;
	cin >> t;
	while(t--){
		init();
		sortElements(a, n);
		cout << endl;
	}
} 
