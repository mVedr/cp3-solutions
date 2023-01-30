#include <bits/stdc++.h>
#define f(k, s, e) for (int k = s; k < e; k++)
#define fi(k, s, e) for (int k = s; k <= e; k++)
#define MOD 1000000007
using namespace std;

signed main()
{
    int n, b, h, w, p, x, mn;
    while (scanf("%d %d %d %d\n", &n, &b, &h, &w) != EOF)
    {
        mn = 1e6;
        while (h--)
        {
            cin >> p;
            for (int i = 0; i < w; i++)
            {
                cin >> x;
                if (x >= n)
                {
                    mn = min(mn, n * p);
                }
            }
        }
        if (mn != 1e6 && mn <= b)
            cout << mn << endl;
        else
            cout << "stay home" << endl;
    }
    return 0;
}