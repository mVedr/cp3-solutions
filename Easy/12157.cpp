#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
void solve(){
  int n; cin>>n;
  int m=0,j=0;
  f(i,0,n){
    int x; cin>>x;
    m+=((x/30)+1)*10;
    j+=((x/60)+1)*15;
  }
  if(m<j){
        cout<<"Mile "<<m<<endl;
    }
    else if(m>j){
        cout<<"Juice "<<j<<endl;
    }else{
        cout<<"Mile Juice "<<m<<endl;
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
   int t = 1;
   cin>>t;
  f(i,1,t+1){
    cout<<"Case "<<i<<": ";
    solve();
  }
    return 0;
}