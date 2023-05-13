#include<bits/stdc++.h>

using namespace std;

bool comp(int a, int b){
    return a > b;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int count = 0;
        vector<int> v(n);
        for(int &i : v) cin >> i;
        sort(v.begin(), v.end());
        int pos = lower_bound(v.begin(), v.end(), x) - v.end();
        for(int i = pos; i < n; i++){
            if(v[i] == x) count++;
        }
        if(count == 0) cout << "-1" << endl;
        else cout << count << endl;
    }
}