#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check1(const vector<int>& a, const vector<int>& b)
{
    for (int i = 0; i < a.size(); i += 2)
    {
        if (a[i] != b[i] and a[i] != b[a.size() - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> b = a;
        sort(b.begin(), b.end());
        if (check1(a, b))
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
}