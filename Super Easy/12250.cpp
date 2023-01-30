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
   string s;
  while(true){
    cin>>s;
    if(s=="#") break;
    cout<<"Case "<<t<<": ";
        if(s=="HELLO") cout<<"ENGLISH"<<endl;
        else if(s=="HOLA") cout<<"SPANISH"<<endl;
        else if(s == "HALLO") cout<<"GERMAN"<<endl;
        else if(s=="BONJOUR") cout<<"FRENCH"<<endl;
        else if(s == "ZDRAVSTVUJTE") cout<<"RUSSIAN"<<endl;
        else if(s=="CIAO") cout<<"ITALIAN"<<endl;
        else cout<<"UNKNOWN"<<endl;
        t++;
  }
    return 0;
}