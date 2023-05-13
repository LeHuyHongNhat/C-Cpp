#include <bits/stdc++.h>

using namespace std;

string s;
int n;
char a[2] = {'6', '8'};
// kiểm tra điều kiện xâu s
bool check()
{
    int cnt6 = 0;
    int cnt8 = 0;
    for (char &i : s)
    {
        if (i == '6')
        {
            cnt6++;
            cnt8 = 0;
        }
        else
        {
            cnt8++;
            cnt6 = 0;
        }
        if (cnt6 > 3 || cnt8 > 1)
            return false;
    }
    return true;
}

void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        s[i] = a[j];
        if (i == n)
        {
            if (check())
            {
                cout << s << endl;
            }
        }
        else
            Try(i + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    s.resize(n);
    s[0] = '8';
    s.back() = '6';
    n -= 2; // đầu cuối cố định
    Try(1);
}