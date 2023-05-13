#include <iostream>
using namespace std;

const int MAXN = 100;

int n;       
int a[MAXN]; 

int max_element(int k)
{
    int result = -1; 
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= k && a[i] > result)
        {
            result = a[i];
        }
    }
    return result;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cin >> k;
    int result = max_element(k);
    if (result == -1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << result << endl;
    }
    return 0;
}
