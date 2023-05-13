#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;

    int n = s.length();
    vector<int> v(n, 1);

    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            if(s[j] <= s[i]){
                v[i] = max(v[i], v[j] + 1);
            }
        }
    }
    int max_length = *max_element(v.begin(), v.end());
    cout << max_length << endl;
    return 0;
}