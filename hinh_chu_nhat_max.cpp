#include<bits/stdc++.h>

using namespace std;

void genString(int n, string s, int numA, int numB, int numC){
    if(s.size() == n && numA == numB && numB == numC){
        cout << s << endl;
        return;
    }
    if(s.size() < n){
        if(numA < n and numA <= numB and numA <= numC){
            genString(n, s + "A", numA + 1, numB, numC);
        }
        if(numB < n and numB <= numC){
            genString(n, s + "B", numA, numB + 1, numC);
        }
        if(numC < n){
            genString(n, s + "C", numA, numB, numC + 1);
        }
    }
}

int main(){
    int n; cin >> n;
    genString(n, "", 0, 0, 0);
    return 0;
}