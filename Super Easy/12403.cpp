#include<bits/stdc++.h>
#include<string>
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
   int t, sum = 0, x;
    char str[20];
    scanf("%d", &t);
    while(t--) {
        scanf("%s", str);
        if(!strcmp(str, "donate")) {
            scanf("%d", &x);
            sum += x;
        } else {
            cout<<sum<<endl;
        }
    }
    return 0;
}