#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
void solve(){
  vector<int> a(10);
  f(i,0,10) cin>>a[i];
  if(a[0]>a[1]) reverse(a.begin(),a.end());
  if(is_sorted(a.begin(),a.end())) cout<<"Ordered"<<endl;
  else cout<<"Unordered"<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
   int t = 1;
   cin>>t;
   cout<<"Lumberjacks:"<<endl;
  while(t--){
      solve();
  }
    return 0;
}