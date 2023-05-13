#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> v(n + m);
        for(int &i : v) {
            cin >> i;
        }
        sort(v.begin(), v.end());
        for(int i : v) {
            cout << i << " ";
        }
        cout << endl;
    }
}