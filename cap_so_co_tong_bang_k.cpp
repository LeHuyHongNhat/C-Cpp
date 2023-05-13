#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; 
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for(int &i : v){
            cin >> i;
        }
        sort(v.begin(), v.end());
        long long count = 0;
        for(int i = 0; i < n; i++){
            count += upper_bound(v.begin() + i + 1, v.end(), k - v[i]) - lower_bound(v.begin() + i + 1, v.end(), k - v[i]);
        }
        cout << count << endl;
    }
}