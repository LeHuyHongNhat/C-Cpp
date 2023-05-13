#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << s << " ";
        while(next_permutation(s.begin(), s.end())){
            cout << s << " ";
        }
        cout << endl;
    }
    return 0;
}