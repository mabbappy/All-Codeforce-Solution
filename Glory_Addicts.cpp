/**
 *Bismillah Hir Rahmanir Rahim
 *author:mabbappy
 *date:26 Nov,22
 **/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 5);
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        vector<int> b(n + 5);
        for (int j = 0; j < n; j++)
        {
            cin >> b[j];
        }
        vector<int> x, y;
        for (int j = 0; j < n; j++)
        {
            if (a[j] == 0)
            {
                x.push_back(b[j]);
            }
            if (a[j] == 1)
            {
                y.push_back(b[j]);
            }
        }
        int c1 = x.size();
        int c2 = y.size();
        sort(x.begin(), x.end(), greater<int>());
        sort(y.begin(), y.end(), greater<int>());
        long long ans = 0;
        for (int j = 0; j < c1; j++)
        {
            ans += x[j];
        }
        for (int j = 0; j < c2; j++)
        {
            ans += y[j];
        }
        int c = min(c1, c2);
        for (int j = 0; j < c; j++)
        {
            ans += x[j];
            ans += y[j];
        }
        if (c1 == c2)
        {
            ans -= min(x[c - 1], y[c - 1]);
        }
        cout << ans << endl;
    }
}