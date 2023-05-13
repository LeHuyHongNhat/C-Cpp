#include <bits/stdc++.h>

using namespace std;

string chuyen5(string x)
{
    for (char &i : x)
    {
        if (i == '6')
        {
            i = '5';
        }
    }
    return x;
}

string chuyen6(string x)
{
    for (char &i : x)
    {
        if (i == '5')
        {
            i = '6';
        }
    }
    return x;
}

int main()
{
    string a, b;
    cin >> a >> b;
    cout << stoi(chuyen5(a)) + stoi(chuyen5(b)) << " ";
    cout << stoi(chuyen6(a)) + stoi(chuyen6(b));
}