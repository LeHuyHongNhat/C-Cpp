#include<bits/stdc++.h>

using namespace std;

int n, x, A[20], C[20];
bool OK;
void print(int m){
    cout << "[";
    for(int i = 1; i <= m; i++){
        cout << C[m] << "]";
    }
}

void back_tracking(int i, int s){
    int j;
    for(j = 1; j <= n; j++){
        if(A[j] >= C[i - 1] && s + A[j] <= x){
            C[i] = A[j]; 
            s = s + A[j];
            if(s == x){
                OK = true;
                print(i);
            }
            else {
                back_tracking(i + 1, s);
                s = s - A[j];
            }
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> x;
        vector<int> v(n);
        for(int &i : v){
            cin >> i;
        }
        int OK = false, C[20] = {}; 
        back_tracking();
    }
}