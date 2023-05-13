#include<bits/stdc++.h>

using namespace std;

void ABString(string s, int n){
	if(n == 0){
		cout << s << " ";
		return;
	}
	ABString(s + "A", n - 1);
	ABString(s + "B", n - 1);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		ABString("", n);
		cout << endl;
	}
}
