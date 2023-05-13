#include <bits/stdc++.h>
using namespace std;

bool la_so_chan(int n)
{
    return n % 2 == 0;
}

bool la_so_nguyen_to(int n)
{
    return n == 2 || n == 3 || n == 5 || n == 7;
}

bool co_day_du(int n)
{
    int dem_2 = 0;
    int dem_3 = 0;
    int dem_5 = 0;
    int dem_7 = 0;
    while (n > 0)
    {
        int chu_so = n % 10;
        if (chu_so == 2)
            dem_2++;
        if (chu_so == 3)
            dem_3++;
        if (chu_so == 5)
            dem_5++;
        if (chu_so == 7)
            dem_7++;
        n /= 10;
    }
    return dem_2 > 0 && dem_3 > 0 && dem_5 > 0 && dem_7 > 0;
}

bool thoa_man(int n)
{
    if (la_so_chan(n))
        return false;
    if (!co_day_du(n))
        return false;
    while (n > 0)
    {
        int chu_so = n % 10;
        if (!la_so_nguyen_to(chu_so))
            return false;
        n /= 10;
    }
    return true;
}

void in_ra(int n)
{
    int duoi = pow(10, n - 1);
    int tren = pow(10, n) - 1;

    for (int i = duoi; i <= tren; i++)
    {
        if (thoa_man(i))
        {
            cout << i << endl;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    in_ra(n);
    return 0;
}