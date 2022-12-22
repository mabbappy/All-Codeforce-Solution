#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        int a[n + 1], b[n + 1];
        int c1 = 0, c2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i])
                c1++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i])
                c2++;
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
                cnt++;
        }
        cout << min(cnt, abs(c1 - c2) + 1) << endl;
    }
}