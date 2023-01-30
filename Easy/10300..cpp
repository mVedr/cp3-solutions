#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
void solve(){
  
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
   int t = 1;
   cin>>t;
  while(t--){
      int k; cin>>k;
      int sum=0;
      while(k--){
        int x,y,z; cin>>x>>y>>z;
        sum+= z*x;
      }
      cout<<sum<<endl;
  }
    
    return 0;
}