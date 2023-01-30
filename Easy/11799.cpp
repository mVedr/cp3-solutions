#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
void solve(){
  int mx=-1; 
  int n;cin>>n;
  f(i,0,n){
    int x;
    cin>>x;
    mx= max(mx,x);
  }
  cout<<mx<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
   int t = 1;
   cin>>t;
  f(i,1,t+1)
      {
        cout<<"Case "<<i<<": ";
        solve();
      }
    
    return 0;
}