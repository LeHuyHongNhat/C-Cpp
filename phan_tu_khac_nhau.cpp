#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int  t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> v(n);
        for(ll &i : v) {
            cin >> i;
        }
        int pos = -1;
        for(int i = 0; i < n - 1; i++) {
            int x;
            cin >> x;
            if(x != v[i] && pos == -1){
                pos = i + 1;
            }
        }
        cout << pos << endl;
    }
}