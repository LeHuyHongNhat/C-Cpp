#include<bits/stdc++.h>

using namespace std;

const int M = 1e9 + 7;

int main(){
    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int &i : a){
            cin >> i;
        }
        sort(a, a + n);
        long long cnt = 0;
        for(int i = 0; i < n; i++){
            cnt = (cnt + (long long)i * a[i]) % M;
        }
        cout << cnt << endl;
    }
}