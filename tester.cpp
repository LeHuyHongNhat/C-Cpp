#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> q;
    q.push(3);
    q.push(7);
    q.push(5);
    cout << "Top: " << q.top() << '\n';
    q.pop();
    cout << "Top after pop: " << q.top() << '\n';
    return 0;
}