#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int &i : v){
            cin >> i;
        }
        int ans = 2e6;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                int sum = v[j] + v[i]; 
                if(abs(sum) < abs(ans)){
                    ans = sum;
                }
            }
        }
        cout << ans << endl;
    }
}