#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        int a[n.length()];
        for (int i = 0; i < n.length(); i++)
        {
            a[i] = n[i] - '0';
        }
        sort(a, a + n.length());
        int i = 0;
        while (a[i] == 0) 
        {
            i++;
        }
        for (; i < n.length(); i++)
        {
            cout << a[i];
        }
        cout << endl;
    }
    return 0;
}
