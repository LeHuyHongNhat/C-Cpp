#include <iostream>
#include <string>
using namespace std;

void ABString(string prefix, int n) {
	if (n == 0) {
		cout << prefix << ", ";
		return;
	}

	ABString(prefix + "A", n - 1);
	ABString(prefix + "B", n - 1);
}

int main() {
	int T, n;
	cin >> T;

	while (T--) {
		cin >> n;
		ABString("", n);
		cout << endl;
	}

	return 0;
}

