#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, M, K;
        cin >> N >> M >> K;
        int A[N], B[M], C[K];
        for (int i = 0; i < N; i++)
            cin >> A[i];
        for (int i = 0; i < M; i++)
            cin >> B[i];
        for (int i = 0; i < K; i++)
            cin >> C[i];
        int i = 0, j = 0, k = 0;
        bool found = false; // biến kiểm tra có tìm thấy phần tử chung không
        while (i < N && j < M && k < K)
        {
            if (A[i] == B[j] && B[j] == C[k])
            {
                cout << A[i] << " ";
                found = true;
                i++;
                j++;
                k++;
            }
            else
            {
                int min_val = min(A[i], min(B[j], C[k])); // tìm phần tử nhỏ nhất trong ba dãy số
                if (A[i] == min_val)
                    i++; // nếu phần tử nhỏ nhất thuộc dãy A, tăng con trỏ của A lên
                if (B[j] == min_val)
                    j++; // nếu phần tử nhỏ nhất thuộc dãy B, tăng con trỏ của B lên
                if (C[k] == min_val)
                    k++; // nếu phần tử nhỏ nhất thuộc dãy C, tăng con trỏ của C lên
            }
        }
        if (!found)
            cout << "NO";
        cout << endl;
    }
    return 0;
}