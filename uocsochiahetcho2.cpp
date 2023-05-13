#include<iostream>
#include<cmath>

using namespace std;


int countI(int n) {
	int count = 0; 
	for(int i = 2; i <= n / 2; i++) {
		if(n % i == 0 && i % 2 == 0){
			count++;
		}
	}
	if(n % 2 == 0) count++;
	return count; 
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n; 
		cin >> n;
		cout << countI(n);
	}
}
