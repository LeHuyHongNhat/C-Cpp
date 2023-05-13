#include <bits/stdc++.h>

using namespace std;

bool check(char c)
{
    return (c == 'A' || c == 'E');
}

bool okFine(string str)
{
    for (int i = 0; i < str.size(); i++)
    {
        if (check(str[i]))
        {
            if (i == 0 or i == str.size() - 1)
                continue;
            if (!check(str[i - 1]) && !check(str[i + 1]))
                return false;
        }
    }
    return true;
}

int main()
{
    string str = "";
    char c;
    cin >> c;
    for (char i = 'A'; i <= c; i++)
    {
        str += i;
    }
    if(okFine(str)){
        cout << str << endl;
    }
    while (next_permutation(str.begin(), str.end()))
    {
        if (okFine(str))
        {
            cout << str << endl;
        }
    }
}