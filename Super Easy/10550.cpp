#include <bits/stdc++.h>
#define f(k, s, e) for (int k = s; k < e; k++)
#define fi(k, s, e) for (int k = s; k <= e; k++)
#define MOD 1000000007
using namespace std;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int i, a, b, c, d;
    while (scanf("%d %d %d %d", &i, &a, &b, &c), (a || b||c||d))
    {
        int ans;
       ans = 1080;
		ans += (i - a) > 0 ? (i - a) * 9 : (i - a + 40) * 9;
		ans += (b - a) > 0 ? (b - a) * 9 : (b - a + 40) * 9;
		ans += (b - c) > 0 ? (b - c) * 9 : (b - c + 40) * 9;
		printf("%d\n", ans);
    }
    return 0;
}