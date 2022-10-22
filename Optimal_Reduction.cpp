#include <bits/stdc++.h>
using namespace std;
int n, m, tt, a[2000010];
int main()
{
    cin >> tt;
    while (tt--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int tt = 2;
        a[n + 1] = a[n] + 1;
        while (a[tt] >= a[tt - 1])
        {
            tt++;
        }
        while (a[tt] <= a[tt - 1])
        {
            tt++;
        }
        if (tt > n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}