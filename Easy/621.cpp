#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    int tc;
	char s[2000];
	scanf("%d", &tc);
	while (tc--) {
		scanf("%s", s);
		int len = strlen(s);
		if (strcmp(s, "1") == 0 || strcmp(s, "4") == 0 || strcmp(s, "78") == 0)
			printf("+\n");
		else if (s[len - 1] == '5' && s[len - 2] == '3')
			printf("-\n");
		else if (s[0] == '9' && s[len - 1] == '4')
			printf("*\n");
		else if (s[0] == '1' && s[1] == '9' && s[2] == '0')
			printf("?\n");
		else
			printf("+\n");
	}
    return 0;
}