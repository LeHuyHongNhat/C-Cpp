#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for(int &i : v)
            cin >> i;
        sort(v.begin(), v.end());
        for(int i = n - 1; i >= n - k; i--){
            cout << v[i] << " ";
        }
        cout << endl;
    }
}