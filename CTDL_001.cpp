#include<iostream>

using namespace std;

int n, x[20];

void init(){
	for(int i = 1; i <= n; i++){
		x[i] = 0;
	}
}

bool finalCheck(){
	for(int i = 1; i <= n; i++){
		if(x[i] == 0){
			return false;
		}
	}
	return true;
}

void display(){
	for(int i = 1; i <= n; i++){
		cout << x[i] << " ";
	}
	cout << endl;
}

bool check(){
	for(int i = 1; i <= n / 2; i++){
		if(x[i] != x[n - i + 1]){
			return false;
		}
	}
	return true; 
}

void genNext(){
	int i = n;
	while(x[i] == 1){
		x[i] = 0;
		i--;
	}
	x[i] = 1;
}

int main(){
	cin >> n;
	init();
	display();
	while(!finalCheck()){
		genNext();
		if(check()){
			display();
		}
	}
	return 0;
}
