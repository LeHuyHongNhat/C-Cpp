#include <bits/stdc++.h>
using namespace std;

int a, b;
vector<int> v;

void sang()
{
    for (int i = 1; i <= b; ++i)
    {
        for (int j = i; j <= b; j += i)
        {
            v[j] += i;
        }
    }
}

void testCase()
{
    cin >> a >> b;
    v.resize(b + 1);
    sang();
    int c = 0;
    for (int i = a; i <= b; ++i)
    {
        c += (v[i] - i > i);
    }
    cout << c;
}

int main()
{
    testCase();
    return 0;
}