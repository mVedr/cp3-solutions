#include <bits/stdc++.h>
#define int long long
#define f(k, s, e) for (int k = s; k < e; k++)
#define fi(k, s, e) for (int k = s; k <= e; k++)
#define MOD 1000000007
using namespace std;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a, b;
    while (true)
    {
        cin >> a >> b;
        if (a == -1 && b == -1)
            break;
        else
        {
            int s1,s2 ;
            if(a>b) s1 = a-b;
            else s1 = b-a;
            if(a>b) s2=100-a+b;
            else s2 = 100-b+a;
            cout<<min(s1,s2)<<endl;
        }
    }

    return 0;
}