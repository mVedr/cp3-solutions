#include <bits/stdc++.h>
#define int long long
#define f(k, s, e) for (int k = s; k < e; k++)
#define fi(k, s, e) for (int k = s; k <= e; k++)
#define MOD 1000000007
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> in(n + 1);
    for (int i = 1; i < n + 1; i++)
    {
        string ii;
        cin >> ii;
        if (ii[0] == 'L')
            in[i] = -1;
        else if (ii[0] == 'R')
            in[i] = 1;
        else if(ii[0]=='S')
        {
            string e; cin>>e;
            int x;
            cin >> x;
            
            in[i] = in[x];
        }
    }
    int ans=0;
    for(auto it : in) ans+=it;
    cout<<ans<<endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}