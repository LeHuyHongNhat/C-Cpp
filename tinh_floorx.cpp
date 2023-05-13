#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, x;
        cin >> n >> x;
        vector<ll> v(n);
        for(ll &i : v){
            cin >> i;
        }
        int pos = upper_bound(v.begin(), v.end(),x) - v.begin();
        if(pos > 0) {
            cout << pos << endl;
        }
        else cout << "-1" << endl;
    }
}