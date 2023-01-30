#include <bits/stdc++.h>
#define int long long
#define f(k, s, e) for (int k = s; k < e; k++)
#define fi(k, s, e) for (int k = s; k <= e; k++)
#define MOD 1000000007
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int h = 0, l = 0;
    f(i, 0, n)
    {
        cin >> a[i];
    }
    f(i, 1, n)
    {
        if (a[i] > a[i - 1])
            h++;
        else if (a[i] == a[i - 1])
            continue;
        else
            l++;
    }
    cout << h << " " << l << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    f(i, 1, t + 1)
    {
        cout << "Case " << i << ": ";
        solve();
    }
    return 0;
}