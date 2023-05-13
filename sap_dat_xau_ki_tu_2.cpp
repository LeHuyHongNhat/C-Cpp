#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int mostFrequentCharCount(string str)
{
    unordered_map<char, int> count;
    int max = 0;
    for (int i = 0; i < str.length(); i++)
    {
        count[str[i]]++;
        if (max < count[str[i]])
        {
            max = count[str[i]];
        }
    }
    return max;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        int d;
        cin >> d;
        cin >> str;
        int n = mostFrequentCharCount(str);
        if (str.length() < d * (n - 1) + 1)
            cout << -1 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}