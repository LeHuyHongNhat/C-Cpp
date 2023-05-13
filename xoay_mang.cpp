#include<bits/stdc++.h>

using namespace std;

void testCase(){
    int n, d;
    cin >> n >> d;
    vector<int> v(n);
    for(int &i : v){
        cin >> i;
    }
    for(int i = d; i < n; i++){
        cout << v[i] << " ";
    }
    for(int i = 0; i < d; i++){
        cout << v[i] << " ";
    }

}

int main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        testCase();
        cout << endl;
    }
}