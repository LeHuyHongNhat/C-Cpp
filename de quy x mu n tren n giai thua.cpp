#include <iostream>
#include <cmath>

using namespace std;

int p(int x, int n) {
    if (n == 0) return 1;
    return x * power(x, n - 1);
}

int ftr(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

double f(int x, int n) {
    return (double) p(x, n) / ftr(n);
}

int main() {
    int x, n;
	cin >> x >> n; 
    cout << f(x, n) << endl;
    return 0;
}

