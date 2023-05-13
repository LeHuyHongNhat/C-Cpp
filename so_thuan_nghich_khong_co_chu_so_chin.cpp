#include <bits/stdc++.h>

using namespace std;

// Kiểm tra số có chứa chữ số 9 hay không
bool containsNine(int num)
{
    while (num > 0)
    {
        if (num % 10 == 9)
        {
            return true;
        }
        num /= 10;
    }
    return false;
}

// Đảo ngược số
int reverseN(int num)
{
    int rev = 0;
    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

// Liệt kê
void listP(int n, vector<int> &p)
{
    for (int i = 2; i <= n; i++)
    {
        // i có phải là số thuận nghịch không chứa 9 ?
        if (i == reverseN(i) && !containsNine(i))
        {
            p.push_back(i);
        }
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> p;
    listP(n, p);

    for (auto i : p)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << p.size() << endl;

    return 0;
}
