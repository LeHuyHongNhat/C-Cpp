#include<bits/stdc++.h>

using namespace std;

void testCase(){ 
    int n;
    cin >> n;
    int s = 0;
    while(n > 0){
        s += n%10;
        n /= 10;
    }
    if(s % 10 == 0){
        cout << "YES";
    }
    else
    cout << "NO";
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