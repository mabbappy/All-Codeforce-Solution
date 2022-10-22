#include <bits/stdc++.h>
#include <map>
using namespace std;
map<string, int> q, qq;
string s[1005];
int a[1005];
int maxn;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i] >> a[i];
        q[s[i]] += a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        maxn = max(maxn, q[s[i]]);
    }
    for (int i = 1; i <= n; i++)
    {
        qq[s[i]] += a[i];
        if (qq[s[i]] >= maxn && q[s[i]] == maxn)
        {
            cout << s[i];
            return 0;
        }
    }
}