#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		int n ;
		cin>>n;
		int a[n];
		map<int,int> m;
		for(int i =0 ;i<n;i++){
			cin>> a[i];
			
			m[a[i]]++;
		}
		sort(a,a+n);
		for(int i =0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(m[a[i]]<m[a[j]]||(m[a[i]]==m[a[j]]&& a[i]>a[j])){
					swap(a[i],a[j]);
				}
			}
		}
		for(auto x :a) cout<<x<<" ";
		cout<<endl;
	} 
}
