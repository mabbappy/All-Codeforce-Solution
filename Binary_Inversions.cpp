/**
 *Bismillah Hir Rahmanir Rahim
 *author:mabbappy
 *date:28 Nov,22
 **/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[200005];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt = 1, n;
    cin >> tt;
    while (tt--)
    {
        cin >> n;
        ll f1 = 0, f0 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
                f1++;
            else
                f0++;
        }
        if (f0 == 0 || f1 == 0)
            cout << n - 1 << endl;
        else
        {
            ll t1 = 0, t0 = 0;
            ll res = 0, ans = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == 1)
                {
                    ans = max(ans, t1 - (f0 - t0));
                    res += (f0 - t0);
                    t1++;
                }
                else
                {
                    t0++;
                    ans = max(ans, (f0 - t0) - t1);
                }
            }
            if (ans > 0)
                cout << res + ans << endl;
            else
                cout << res << endl;
        }
    }
}