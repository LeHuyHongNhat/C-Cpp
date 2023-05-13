#include<bits/stdc++.h>

using namespace std;

#define ll long long 

int main(){
    int n;
    ll k;
    ll a[93];
    a[1] = a[2] = 1;
    for(int i = 3; i < 93; i++){
        a[i] = a[i - 1] + a[i - 2];
    }
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        while(n > 2){
            if(k > a[n - 2]){
                k -= a[n - 2];
                // cout << "k = " << k << endl;
                n--;
                // cout << "n = " << n << endl;
            }
            else{
                n -= 2;
                // cout << n << " ELSE" << endl;
            }
        }
        cout << n - 1 << endl;
    }
}