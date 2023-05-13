#include<iostream>
using namespace std;
void Try(char *a, int i, int n)
{
    if(i == n)
    {
        for(int j=0; j<n; j++)
        {
            cout << a[j];
        }
        if(n != 0) cout << ",";
        return;
    }
    a[i] = 'A';
    Try(a, i+1, n);
    a[i] = 'B';
    Try(a, i+1, n);
}
int main()
{
    int n;
    cin >> n;
    char *a = new char[n];
    Try(a, 0, n);
    return 0;
}

