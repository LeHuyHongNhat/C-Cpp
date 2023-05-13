#include <bits/stdc++.h>

using namespace std;

void testCase()
{
    string s;
    cin >> s;
    int i = s.length() - 1;
    while (i >= 0 && s[i] == '0')
    {
        s[i--] = '1';
    }
    if (s[i] > '0')
        s[i] = '0';
    cout << s << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        testCase();
    }
}