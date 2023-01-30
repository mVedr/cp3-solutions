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
    multiset<int> st;
    int a,b,c; cin>>a>>b>>c;
    st.insert(a);st.insert(b);st.insert(c);
    int cc=1;
    for(auto it : st){
        if(cc==2) {
            cout<<it<<endl;
            break;
        }
        cc++;
    }
  }
    
    return 0;
}