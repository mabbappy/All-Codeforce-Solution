#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int a;
        int x, y, x1 = 0, y1 = 0, x2 = 0, y2 = 0;
        cin >> a;
        while (a--)
        {
            cin >> x >> y;
            x1 = max(x1, x);
            x2 = min(x2, x);
            y1 = max(y1, y);
            y2 = min(y2, y);
        }
        cout << 2 * (x1 - x2 + y1 - y2) << endl;
    }
}