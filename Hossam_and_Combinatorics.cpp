/**
 *Bismillah Hir Rahmanir Rahim
 *author:mabbappy
 *date:12 Dec,22
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
        ll n;
        cin >> n;
        ll ar[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        sort(ar, ar + n);
        ll mn = ar[0];
        ll mx = ar[n - 1];
        // cout << mx << endl;
        ll cnt = 0, cnt1 = 0;
        for (ll i = 0; i < n; i++)
        {
            if (ar[i] == mn)
            {
                cnt++;
            }
        }
        for (ll i = 0; i < n; i++)
        {
            if (ar[i] == mx)
            {
                cnt1++;
            }
        }
        if (mn == mx)
        {
            cout << (cnt - 1) * cnt << endl;
        }
        else
        {
            cout << 2 * cnt * cnt1 << endl;
        }
    }
}