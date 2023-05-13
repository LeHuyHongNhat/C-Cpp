#include<bits/stdc++.h>

using namespace std;

char c;
int n;
string s;

void Try(int i){
    for(char j = i; j <= c; j++){
        s.push_back(j);
        if(s.length() == n) cout << s << endl;
        else Try(j);
        s.pop_back();
    }
}

int main(){
    cin >> c >> n;
    Try('A');
}