#include<bits/stdc++.h>

using namespace std;

void testCase(){
    int n;
    cin >> n;
    vector<int> v(n + 1, 0);
    for(int i = 1; i <= n; i++){
        cin >> v[i];
        v[i] += v[i - 1];
    }
    for(int i = 1; i <= n; i++){
        int L = v[i - 1];
        int R = v[n] - v[i];
        if(L == R){
           cout << i;
           return;
        }
    }
    cout << -1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        testCase();
        cout << endl;
    }
}