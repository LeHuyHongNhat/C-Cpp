#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> a; // lưu trữ trước và sau khi xử lí
vector<int> b; // xử lí để lưu vào vector a

void print()
{
    cout << "[";
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i];
        if (i != a.size() - 1)
        {
            cout << " ";
        }
    }
    cout << "]" << endl;
}

void Try(int i)
{
    print();
    if (i == 1)
        return;
    for (int j = 0; j < i - 1; ++j)
    {
        b.push_back(a[j] + a[j + 1]);
    }
    a = b;           // lưu từ b vào a
    a.resize(i - 1); // vì kích thước vector b < a nên cần giảm kích thước a để tránh in thừa các phần tử 0
    b.clear();       // xóa toàn bộ b để chuẩn bị thực hiện bước đq tiếp theo
    Try(i - 1);
}

void testCase()
{
    cin >> n;
    a.resize(n);
    for (int &i : a)
        cin >> i;
    Try(n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        testCase();
        cout << endl;
    }
    return 0;
}