#include<bits/stdc++.h>
using namespace std;

int t, n;
vector<string> res;

void dfs(string cur) {
    if (cur.length() == n) {
        res.push_back(cur);
        return;
    }
    dfs(cur + "0");
    dfs(cur + "1");
}

int main() {
    cin >> t;
    while (t--) {
        res.clear();
        cin >> n;
        dfs("");
        sort(res.begin(), res.end());
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

