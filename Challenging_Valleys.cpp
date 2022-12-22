/**
 *Bismillah Hir Rahmanir Rahim
 *author:mabbappy
 *date:21 Nov,22
 **/
#include <bits/stdc++.h>
using namespace std;
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
        int a[n + 5];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int ok = 0;
        for (int i = 2; i <= n; i++)
        {
            if (a[i] == a[i - 1])
                continue;
            if (a[i] > a[i - 1])
            {
                ok = 1;
            }
            if (a[i] < a[i - 1] and ok == 1)
            {
                ok = -1;
                break;
            }
        }
        cout << (ok > -1 ? "YES" : "NO") << endl;
    }
}