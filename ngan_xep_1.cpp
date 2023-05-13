#include<bits/stdc++.h>

using namespace std;

int main(){
    int x;
    string s;
    vector<int> v;

    while(cin >> s){
        if(s == "push"){
            cin >> x;
            v.push_back(x);
        }
        else if(s == "pop"){
            if(!v.empty()){
                v.pop_back();
            }
        }
        else if(s == "show"){
            if(v.empty()){
                cout << "empty";
            }
            else {
                for(int i : v) 
                cout << i << " ";
            }
            cout << endl;
        }
    }
}