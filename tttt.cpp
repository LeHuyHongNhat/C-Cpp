#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MAXN=1e5+5;
int t, n, m, x[MAXN], y[MAXN];

bool cmp(int a, int b){
    return a>b;
}

signed main(){
    cin>>t;
    while(t--){
        int ans=0;
        cin>>n>>m;
        for(int i=0; i<n; i++) cin>>x[i];
        for(int i=0; i<m; i++) cin>>y[i];
        sort(x, x+n, cmp);
        sort(y, y+m);
        int j=0;
        for(int i=0; i<n; i++){
            while(j<m && pow(y[j], x[i])<=pow(x[i], y[j])) j++;
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}


