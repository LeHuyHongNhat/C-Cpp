#include<iostream>

using namespace std;
void ABString(char str[], int n, int i) {
	int k = 0;
	if (i == n) {
		str[i] = '\0';
		for(int i = 0; i < n; i++) {
			if(str[i] != 'A')
				k = 0;
			else k = 1;
		}
		if(k == 0)
			cout << str << ",";
		else cout << str;
		return;
	}

	str[i] = 'A';
	ABString(str, n, i + 1);
	str[i] = 'B';
	ABString(str, n, i + 1);
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		char str[n + 1];
		ABString(str, n, 0);
		cout << endl;
	}
}
