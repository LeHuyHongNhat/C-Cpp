#include<bits/stdc++.h>

using namespace std;

void findx(int n){
    queue<string> q;
    q.push("9");
    while(true){
        string s = q.front();
        q.pop();
        if(stoi(s) % n == 0){
            cout << s << endl;
            break;
        }
        q.push(s + "0");
        q.push(s + "9");
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        findx(n);
    }
    return 0;
}