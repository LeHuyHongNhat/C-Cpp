#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        priority_queue<int, vector<int>, greater<int>> min_heap;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            min_heap.push(x);
        }
        long long cost = 0;
        while (min_heap.size() > 1)
        {
            int a = min_heap.top();
            min_heap.pop();
            int b = min_heap.top();
            min_heap.pop();
            cost += a + b;
            min_heap.push(a + b);
        }
        cout << cost << endl;
    }
    return 0;
}