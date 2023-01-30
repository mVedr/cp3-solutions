#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
void solve(){
  string w; cin>>w;
  string ws[3] = {"one","two","three"};
  f(i,0,3){
    if(w.length()!=ws[i].length()) continue;
    else{
      int cl=0;
      f(ii,0,ws[i].length()){
        if(w[ii]==ws[i][ii]) cl++;
      }
      if(cl>ws[i].length()-2) cout<<i+1<<endl;
    }
  } 
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
   int t = 1;
   cin>>t;
  while(t--){
      solve();
  }
    
    return 0;
}