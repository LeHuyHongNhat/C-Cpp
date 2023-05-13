#include <bits/stdc++.h>

using namespace std;

int n, k;
int a[30];
vector<string> v, ans;

void solve(){ // print
    for(int i = 1; i <= k; i++){
        cout << v[a[i] - 1] << " ";
    }
    cout <<  endl;
}

void Try(int i){ // quay lui to hop
    for(int j = a[i - 1] + 1; j <= v.size() - k + i; j++){
        a[i] = j;
        if(i == k){
            solve();
        }
        else Try(i + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> k;
    string s;
    map<string, bool> m; // tạo map lưu các string đảm bảo mỗi string không bị lặp lại
    for(int i = 0; i < n; i++){
        cin >> s;
        m[s] = 1; // map<key, value> m
    }
    for(auto &i : m) v.push_back(i.first); // i.first = string
    Try(1);
    return 0;
}