#include <iostream>
#include <cmath>

using namespace std;
int tongchuso(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int check(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return n > 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    if (check(n))
        cout << "NO" << endl;
    else
    {
        int sum1 = tongchuso(n);
        int sum2 = 0;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                int count = 0;
                while (n % i == 0)
                {
                    n /= i;
                    count++;
                }
                sum2 += tongchuso(i) * count;
            }
        }
        if (n != 1)
            sum2 += tongchuso(n);
        if (sum1 == sum2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
