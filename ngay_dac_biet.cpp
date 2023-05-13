#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<string> a1 = {"02", "20", "22"};
    vector<string> a2 = {"02"};
    vector<string> a3 = {"2000", "2002", "2020", "2022", "2200", "2202", "2220", "2222"};
    for (auto i : a1)
        for (auto j : a2)
            for (auto k : a3)
                cout << i + "/" + j + "/" + k << endl;
}