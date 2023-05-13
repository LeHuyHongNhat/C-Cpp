#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        int count = 0;
        cin >> n >> k;
        vector<int> v(n);
        for (int &i : v)
            cin >> i;
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            if (v[i] > k)
                break;
            for (int j = i + 1; j < n; j++)
                if (v[j] + v[i] == k)
                    count++;
        }
        cout << count << endl;
    }
}