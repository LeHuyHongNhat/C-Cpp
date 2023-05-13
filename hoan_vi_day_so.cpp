#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(true);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &i : a){
        cin >> i;
    }
    sort(a.begin(), a.end());
    for(auto i : a){
        cout << i << " ";
    }
    cout << endl;
    while(next_permutation(a.begin(), a.end())){
        for(auto i : a){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}