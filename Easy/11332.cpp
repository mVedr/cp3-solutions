#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
int sd(int n){
    int sum=0;
   while(n>0){
                sum+=n%10;
                n/=10;
            }
            return sum;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    while(true){
        int n; cin>>n;
        if(n==0) break;
        else{
           int kk = sd(n);
           while(kk>=10){
             kk = sd(kk);
           }
           cout<<kk<<endl;
        }
    } 
    return 0;
}