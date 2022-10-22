#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt, n, h, m;
    cin >> tt;
    while (tt--)
    {
        cin >> n >> h >> m;
        int s = h * 60 + m;
        int ans = 100000;
        while (n--)
        {
            cin >> h >> m;
            int p = h * 60 + m;
            if (p < s)
            {
                p += (24 * 60);
            }
            ans = min(ans, p - s);
        }
        cout << ans / 60 << " " << ans % 60 << endl;
    }
}