#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &v, int n)
{
    for (int i = 0; i < n; ++i)
    {
        int key = v[i];
        int j = i;
        while (j > 0 && v[j - 1] > key)
        {
            v[j] = v[j - 1];
            j--;
        }
        v[j] = key;
        cout << "Buoc " << i << ": ";
        for (int k = 0; k <= i; ++k)
        {
            cout << v[k] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    vector<vector<int>> result;
    for (int i = 0; i < n; ++i)
    {
        int key = v[i];
        int j = i;
        while (j > 0 && v[j - 1] > key)
        {
            v[j] = v[j - 1];
            j--;
        }
        v[j] = key;
        count++;
        result.push_back(v);
    }
    for (int i = result.size() - 1; i >= 0; i--)
    {
        cout << "Buoc " << count-- << ": ";
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
