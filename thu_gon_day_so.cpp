#include <iostream>
using namespace std;

int main() {
    int A[1000], N, i, j;
    cin >> N;
    for (i = 0; i < N; i++) {
        cin >> A[i];
    }
    while (true) {
        bool coCapPhanTuChiaHetCho2 = false;
        for (i = 0; i < N - 1; i++) {
            if ((A[i] + A[i+1]) % 2 == 0) {
                for (j = i; j < N - 2; j++) {
                    A[j] = A[j+2];
                }
                N -= 2;
                coCapPhanTuChiaHetCho2 = true;
                break;
            }
        }
        if (!coCapPhanTuChiaHetCho2) {
            break;
        }
    }
    cout << N << endl;
    return 0;
}
