#include<iostream>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool mat[10] = {false};
        for(int i = 0; i < n; i++){
            long long x;
            cin >> x;
            while(x > 0){
                mat[x % 10] = true;
                x /= 10;
            }
        }
        for(int i = 0; i < 10; i++){
            if(mat[i] == true) cout << i << " ";
        }
        cout << endl;
    }
}