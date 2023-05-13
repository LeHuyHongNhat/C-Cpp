#include <iostream>
#include <algorithm>
using namespace std;
int cnt = 0;

int n, a[100];

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void init() {
	cin >> n;
	for (int i = 0; i < n; i++)
		a[i] = i + 1;
}

void print() {
	cout << ++cnt << ": ";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

int main() {
	init();
	do {
		print();
	} while (next_permutation(a, a + n));
	return 0;
}

