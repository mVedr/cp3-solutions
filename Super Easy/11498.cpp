#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    while(true){
        int k; cin>>k;
        if(k==0) break;
        else{
            int n,m; cin>>n>>m;
            f(i,0,k){
                int x,y; cin>>x>>y;
                if(x==n||y==m) cout<<"divisa"<<endl;
                else if(x>n && y>m){
                    cout<<"NE"<<endl;
                }else if(x<n && y<m){
                    cout<<"SO"<<endl;
                }else if(x>n && y<m){
                    cout<<"SE"<<endl;
                }else cout<<"NO"<<endl;
            }
        }
    }
    
    return 0;
}