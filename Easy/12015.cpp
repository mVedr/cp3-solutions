#include <bits/stdc++.h>
#define int long long
#define f(k, s, e) for (int k = s; k < e; k++)
#define fi(k, s, e) for (int k = s; k <= e; k++)
#define MOD 1000000007
using namespace std;
void solve()
{
    vector<pair<int, string>> st;
    int rr = -1;
    f(i, 0, 10)
    {
        string w;
        cin >> w;
        int r;
        cin >> r;
        rr = max(rr, r);
        st.push_back({r, w});
    }
    for (auto it : st)
    {
        if (it.first == rr)
            cout << it.second << endl;
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    f(ii, 1, t + 1)
    {
        cout << "Case #" << ii << ":" << endl;
        solve();
    }
    return 0;
}