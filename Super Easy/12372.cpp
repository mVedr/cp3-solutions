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
  f(i,1,t+1){
    cout<<"Case "<<i<<": ";
    int d1,d2,d3; cin>>d1>>d2>>d3;
    if(d1>20 || d2>20 || d3>20){
        cout<<"bad"<<endl;
    }else cout<<"good"<<endl;
  }
    
    return 0;
}