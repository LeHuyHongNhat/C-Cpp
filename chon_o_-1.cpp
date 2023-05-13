#include <bits/stdc++.h>
using namespace std;
const int maxn = 25;
int t,n,a[maxn][maxn],f[1<<maxn];
int main(){
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>a[i][j];
        memset(f,-0x3f,sizeof(f));
        f[0]=0;
        for(int s=0;s<(1<<n);s++){
            int cnt=__builtin_popcount(s);
            for(int i=0;i<n;i++){
                if(!(s&(1<<i))) f[s|(1<<i)]=max(f[s|(1<<i)],f[s]+a[cnt][i]);
            }
        }
        cout<<f[(1<<n)-1]<<endl;
    }
}