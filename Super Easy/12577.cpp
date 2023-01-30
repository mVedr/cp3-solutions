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
    int cc=1;
    while(true){
        string m; cin>>m;
        if(m=="*") break;
        cout<<"Case "<<cc++<<": ";
        if(m=="Hajj") cout<<"Hajj-e-Akbar"<<endl;
        else if(m=="Umrah") cout<<"Hajj-e-Asghar"<<endl;
    }  
    return 0;
}