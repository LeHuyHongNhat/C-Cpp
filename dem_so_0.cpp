#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t--){
        int cnt = 0;
        int n;
        cin >> n;
        while(n--){
            int x;
            cin >> x;
            if(x == 0){
                cnt++;
            }
        }
        cout << cnt;
        cout << endl;
    }
}